using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;
using Model;
using Network_Controller;
using System.Net.Sockets;
using Newtonsoft.Json;
using System.IO;
using System.Timers;

namespace View
{
    public partial class clientWindow : Form
    {
        private World gameworld;
        //keeps track of the center cube aka 1st cube
        private int centerCubeID;
        private Viewport vp;
        private Socket gameSocket;
        private bool connected;
        //for fps calculation
        private int frameCounter ;
        private List<Cube> playerCubes;
        private int teamID;
        private int totalTime;
        private int playersEaten;
        private int foodEaten;

        /// <summary>
        /// initialize new client window
        /// </summary>
        public clientWindow()
        {
            //initialize classwide fields
            centerCubeID = -1;
            frameCounter = 0;
            playerCubes = new List<Cube>();
            teamID = -1;
            playersEaten = 0;
            foodEaten = 0;
            totalTime = 0;

            //initialize gui
            InitializeComponent();
            gameworld = new World(1000, 1000);
            //initialize a new timer
            System.Timers.Timer timer = new System.Timers.Timer(1000);
            timer.Enabled = true;
            timer.Elapsed += new System.Timers.ElapsedEventHandler(frameTimer_Tick);
            timer.Start();
        }

        /// <summary>
        /// Parse String into JSON. Assumes all messages are correct
        /// </summary>
        /// <param name="message"></param>
        private void parseJson(string message)
        {
            message = message.Trim();
            message = message.Replace("\0", string.Empty);
            message = message.Replace("\r", string.Empty);
            //Split the cubeString by newline and remove empty cells
            String[] cubeStrings = message.Split('\n');

            foreach (string s in cubeStrings)
            {
                //Prevent code changining gameworld's map from being run at the same time as paintcode
                lock (gameworld)
                {
                    //change the string into a cube
                    Cube cube = JsonConvert.DeserializeObject<Cube>(s);
                    cube.changeDimensions();
                    Dictionary<int, Cube> map = gameworld.WorldMap;

                    
                    //Update the world map
                    Cube originalCube = null;
                    map.TryGetValue(cube.ID, out originalCube);
                    if (originalCube == null)
                    {
                        //if it's the first cube, set its id as the center cube, add it to the player list and initailize the viewport around it
                        if (centerCubeID == -1)
                        {
                            centerCubeID = cube.ID;
                            playerCubes.Add(cube);
                            vp = new Viewport(cube, playerCubes);
                        }
                        //regardless, add the cube
                        map.Add(cube.ID, cube);

                        //if the cube is in a team, add it to the team list
                        if (cube.TeamID==teamID)
                        {
                            playerCubes.Add(cube);
                        }
                    }
                    
                    else if (cube.CubeMass == 0)
                    {
                        //Keeps track of what's eaten
                        if (cube.IsFood)
                            foodEaten++;
                        else
                            playersEaten++;

                        //Change world when cube is eaten
                        if (cube.TeamID == teamID)
                        {
                            for(int i=0;i<playerCubes.Count();i++)
                            {
                                if (playerCubes[i].ID == cube.ID)

                                    playerCubes.RemoveAt(i) ;
                            }
                            
                        }
                        //What to do if player cube died
                        if (cube.ID==centerCubeID|| playerCubes.Count()==0)
                        {
                            gameOver();
                        }
                        map.Remove(cube.ID);
                    }
                    else
                    {
                        //if the center cube has a player id, that's the team id
                        if (cube.ID == centerCubeID && cube.TeamID != 0)
                            teamID = cube.TeamID;
                        //if the center cube id goes back to 0, only a single cube is left
                        else if (cube.ID == centerCubeID && cube.TeamID == 0)
                            teamID = -1;

                        if (cube.TeamID == teamID)
                        {
                            for (int i = 0; i < playerCubes.Count(); i++)
                            {
                                if (playerCubes[i].ID == cube.ID) 
                                    playerCubes.RemoveAt(i);
                                
                            }
                            playerCubes.Add(cube);
                        }
                        map.Remove(cube.ID);
                        map.Add(cube.ID, cube);
                    }
                    gameworld.WorldMap = map;
                }
            }

        }

        //determins what to do when the game is over
        private void gameOver()
        {
            string message = "Game over!\nTime Played: " + totalTime + "seconds \nFinal Cube Mass: " + (int)vp.CenterCube.CubeMass
                +"\nAll food cubes Eaten: "+foodEaten+"\n All players cubes eaten: "+playersEaten;
            //show that the game is over
            MessageBox.Show(message);

            //stop painting the screen with game world
            this.Paint -= this.clientWindow_Paint;
            //show input box to start game
            this.BeginInvoke(new MethodInvoker(delegate
            {
                inputBox.Show();
            }));

            //close the existing connection
            connected = false;
            //display connection status
            successfulConnection();
            //close the socket
            gameSocket.Shutdown(SocketShutdown.Both);
            gameSocket.Disconnect(true);
        }
        /// <summary>
        /// When the submit button is clicked, the game starts. Shows error if there's no connection
        /// </summary>
        /// <param name="sender"></param>
        /// <param name="e"></param>
        private void submitButton_Click(object sender, EventArgs e)
        {
            try
            {
                startGame(nameTextBox.Text, serverTextBox.Text);
                inputBox.Hide();
                this.Focus();
            }
            catch (Exception ex)
            {
                MessageBox.Show("Error connecting to server" + ex.Message);
            }
        }

        private void sendToNetwork(String message)
        {
            lock (gameworld)
            {
                if(connected)
                Controller.Send(gameSocket, message);
            }
        }
        /// <summary>
        /// 
        /// </summary>
        private void startGame(String name, String hostname)
        {
            
            gameworld = new World(1000, 1000);
                //Sets new callback function and connect to the server
                Action<StateObject> newCallbackFunc = callbackFunction;
                Socket socket = Controller.Connect_to_Server(newCallbackFunc, hostname);
                gameSocket = socket;

            
            connected = true;
            centerCubeID = -1;
            //Send a name to the server
            sendToNetwork((name + "\n"));


            FrameTimer.Start();
            //Start painting cubes
            this.Paint += new PaintEventHandler(this.clientWindow_Paint);
            this.Invalidate();
        }



        /// <summary>
        /// function called when data is recieved from server
        /// </summary>
        /// <param name="state"> the state of the existing connection</param>
        private void callbackFunction(StateObject state)
        {
            //if this is not about an initially established connection
            if (!state.isConnection)
            {
                //retrieve the stringbuilder from the existing connection
                StringBuilder sb = state.sb;
                //                string temp1 = sb.ToString();
                string newResult = Encoding.UTF8.GetString(state.buffer, 0, StateObject.BufferSize);
                sb.Append(newResult);
                //System.Threading.Thread.Sleep(2);
                string data = sb.ToString();

                //Find last index of newline
                int index = data.LastIndexOf('\n');

                //If it is there and not the last
                if (index > -1 && index < data.Length - 1)
                {

                    parseJson(data.Substring(0, index));
                    state.sb = new StringBuilder();
                    state.buffer = new byte[StateObject.BufferSize];
                    state.sb.Append(data.Substring(index));

                }
                //If there's no newline or its the last
                else
                {
                    parseJson(data);
                    state.sb = new StringBuilder();
                    state.buffer = new byte[StateObject.BufferSize];

                }
                if(connected)
                 Controller.i_want_more_data(state);

            }
            //If it is about a connection
            else
            {
                //InitializeComponent the gamesocket used
                gameSocket = state.socket;
                connected = true;
                successfulConnection();
                state.isConnection = false;
            }

        }

        private void successfulConnection()
        {
            this.BeginInvoke(new MethodInvoker(delegate
            {


                if (connected)
                    connectedText.Text = "Connected";
                else
                    connectedText.Text = " Not Connected";
            }));

        }


        /// <summary>
        /// Paints the screen of the form. Redraws all objects as fast as possible
        /// </summary>
        /// <param name="sender"></param>
        /// <param name="e"></param>
        private void clientWindow_Paint(object sender, PaintEventArgs e)
        {
            lock (gameworld)
            {
                frameCounter++;
                Cube playerCube;
                gameworld.WorldMap.TryGetValue(centerCubeID, out playerCube);
                if (playerCube != null)
                    massBox.Text = playerCube.CubeMass.ToString();
                massBox.Refresh();
                Graphics g = e.Graphics;
                Dictionary<int, Cube> map = gameworld.WorldMap;
                foreach (Cube c in map.Values)
                {
                    //If cube is in the Viewport
                    if (vp.isInViewPort(c))
                    {
                        //If cube is main player, center around that cube
                        if (c.ID == centerCubeID)
                            vp = new Viewport(c,playerCubes);
                        //normalize all cubes according to viewport
                        Cube normCube = vp.normalizeCube(c);
                        //draw cube                    
                        g.FillRectangle(new SolidBrush(Color.FromArgb(normCube.CubeColor)), (float)normCube.Left, (float)normCube.Top,
                            (float)normCube.Width, (float)normCube.Width);

                        //Draws the label
                        if (!normCube.IsFood)
                        {
                            // Create string to draw.
                            String drawString = normCube.CubeName;


                            // Create font and brush.
                            Font tempFont = new Font("Arial", 16);
                            Font drawFont = GetAdjustedFont(g, drawString, tempFont,(int) (normCube.Width*.8), 40, 1);
                            
                            SolidBrush drawBrush = new SolidBrush(Color.White);

                            //Create format
                            StringFormat format = new StringFormat();
                            format.Alignment = StringAlignment.Center;
                            format.LineAlignment = StringAlignment.Center;

                            // Create point for upper-left corner of drawing.
                            PointF drawPoint = new PointF((float)normCube.XPos,(float)normCube.YPos);

                            // Draw string to screen.
                            
                            e.Graphics.DrawString(drawString, drawFont, drawBrush, drawPoint,format);
                        }

                    }
                }

            }
            lock (gameworld)
            {
                this.Invalidate();
                getMouse();
            }
        }

        private Font GetAdjustedFont(Graphics g, string text, Font OriginalFont, int ContainerWidth, int MaxFontSize, int MinFontSize)
        {
            // Slowly decrease the fontsize unitl we get one that fits     
            for (int AdjustedSize = MaxFontSize; AdjustedSize >= MinFontSize; AdjustedSize--)
            {
                Font TestFont = new Font(OriginalFont.Name, AdjustedSize, OriginalFont.Style);

                // Test the string with the new size
                SizeF AdjustedSizeNew = g.MeasureString(text, TestFont);

                if (ContainerWidth > Convert.ToInt32(AdjustedSizeNew.Width))
                {
                    // Good font, return it
                    return TestFont;
                }
            }

            //otherwise return the original
            return OriginalFont;
        }
        /// <summary>
        /// Gets and sends the mouse position to the server
        /// </summary>
        private void getMouse()
        {
            if (vp == null)
                return;
            Point p = vp.reverseXY(this.PointToClient(Cursor.Position));
            sendToNetwork("(move, " + p.X + ", " + p.Y + ")\n");
            
        }

        private void clientWindow_KeyDown(object sender, KeyEventArgs e)
        {
            if (e.KeyCode == Keys.Space)
            {
                Point p = this.PointToClient(Cursor.Position);
                sendToNetwork("(split, " + p.X + ", " + p.Y + ")\n");
            }
        }

        private void frameTimer_Tick(object sender, ElapsedEventArgs e)
        {

            totalTime++;
            this.BeginInvoke(new MethodInvoker(delegate
        {
                fpsBox.Text = (frameCounter).ToString();
                fpsBox.Refresh();
            frameCounter = 0;
            }));
        }
    }
}

/* String hostname;
String name;
World gameworld = new World(1000, 1000);
int playerId = -1;
Viewport vp;
bool connected = false;
Socket gameSocket;

/// <summary>
/// initialize new client window
/// </summary>
public clientWindow()
{
    InitializeComponent();
}


private void gameScreenPanel_Paint(object sender, PaintEventArgs e)
{
    Graphics g = e.Graphics;

    lock (gameworld)
    {

        foreach (Cube c in gameworld.listCube())
        {
  // g.FillRectangle(new SolidBrush(Color.FromArgb(c.CubeColor)), (float)c.Left, (float)c.Top, (float)c.Width, (float)c.Width);

   if (vp.isInViewPort(c))
            {


       Cube normCube = vp.normalizeCube(c);
        g.FillRectangle(new SolidBrush(Color.FromArgb(normCube.CubeColor)), (float)normCube.Left, (float)normCube.Top, (float)normCube.Width, (float)normCube.Width);
            }
        }




    }
    if(connected)
        Controller.Send(gameSocket, ("(move, " + MousePosition.X + ", " + MousePosition.Y + ")\n"));
    Console.WriteLine("(move, " + MousePosition.X + ", nnndndndn" + MousePosition.Y + "\n");
    this.gameScreenPanel.Invalidate();
    }

}

private void timer1_Tick(object sender, EventArgs e)
{
  //  gameScreenPanel.Invalidate();
}

private void submitButton_Click(object sender, EventArgs e)
{
    hostname = serverTextBox.Text;
    name = nameTextBox.Text;
    try
    {
        startGame();
        inputBox.Dispose();
    }
    catch (Exception ex)
    {
        MessageBox.Show("Error connecting to server");
    }
}

private void callbackFunction(StateObject state)
{

        if (!state.isConnection)
        {

            StringBuilder sb = state.sb;
            string temp1 = sb.ToString();
            string temp3 = Encoding.UTF8.GetString(state.buffer, 0, StateObject.BufferSize);
            sb.Append(Encoding.UTF8.GetString(state.buffer, 0, StateObject.BufferSize));
            //System.Threading.Thread.Sleep(2);
            string data = sb.ToString();
            string temp2 = sb.ToString();
            int index = data.LastIndexOf('\n', data.Length - 1);

            if (index > -1 && index < data.Length - 1)
            {

                parseJson(data.Substring(0, index));
                state.sb = new StringBuilder();
                state.buffer = new byte[StateObject.BufferSize];
                state.sb.Append(data.Substring(index));

            }
            else
            {
                connected = !connected;
                StateObject newState = new StateObject();
                newState.cbFunction = state.cbFunction;
                newState.socket = state.socket;

            }
            Controller.i_want_more_data(state);

        }
        else
        {
            gameSocket = state.socket;
            connected = !connected;
            successfulConnection();
            state.isConnection = false;
        }

}

private void successfulConnection()
{ 
    this.BeginInvoke(new MethodInvoker(delegate
    {


        if (connected)
            connectedText.Text = "Connected";
        else
            connectedText.Text = " Not Connected";
    }));

}
delegate void CallBackFunc(StateObject state);

private void startGame()
{
    CallBackFunc newCallbackFunc = callbackFunction;
    Socket socket = Controller.Connect_to_Server(newCallbackFunc, hostname);
    Controller.Send(socket, (name + "\n"));
    this.gameScreenPanel.Paint += gameScreenPanel_Paint;
    this.gameScreenPanel.Invalidate();

}

private void gameScreenPanel_PreviewKeyDown(object sender, PreviewKeyDownEventArgs e)
{
    if (e.KeyCode == Keys.Space)
    {
        //MessageBox.Show("Left:"+gameworld.getCube(0).Left.ToString()+" Y:"+ gameworld.getCube(0).YPos.ToString()+" X:" +gameworld.getCube(0).XPos.ToString() + " Width: "+gameworld.getCube(0).Width.ToString());
        string s = "";
        foreach (Cube c in gameworld.listCube())
        {
            MessageBox.Show(c.CubeName);
        }
    }
}

private void parseJson(string message)
{

    string[] cubeStrings = message.Split('\n');
    foreach (string s in cubeStrings)
    {
        if (String.IsNullOrWhiteSpace(s)) continue;
        try
        {
            lock (gameworld)
            {
                Cube cube = JsonConvert.DeserializeObject<Cube>(s);
       // cube.changeDimensions();
                if (playerId == -1)
                {
                    playerId = cube.ID;
                    vp = new Viewport(cube);
                }
                if (gameworld.getCube(cube.ID) == null)
                    addCube(cube);
                else if (cube.CubeMass == 0)
                {
                    if (cube.ID == playerId)
                        MessageBox.Show("Game over");
                    removeCube(cube);
                }
                else
                    replaceCube(cube);
            }
        }
        catch (Exception ex)
        {
            //failed cubes fix later
                         MessageBox.Show("Error: trying to parse "+message);
        }
    }

}

private void addCube(Cube cube)
{
    gameworld.addCube(cube);
}

private void removeCube(Cube cube)
{
    gameworld.removeCube(cube.ID);
}

private void replaceCube(Cube cube)
{
    gameworld.replaceCube(cube.ID, cube);
}
private void gameScreenPanel_MouseMove(object sender, MouseEventArgs e)
{

  //  Console.WriteLine("(move, " + e.X + ", " + e.Y + "\n");
}



}

}
*/
