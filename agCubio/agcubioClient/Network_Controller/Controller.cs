using System;
using System.Collections.Generic;
using System.Linq;
using System.Net;
using System.Net.Sockets;
using System.Text;
using System.Threading.Tasks;

namespace Network_Controller
{
    /// <summary>
    /// class to remember what to do when data comes in through the network
    /// </summary>
    public class StateObject
    {
        /// <summary>
        /// Tells if the connection is the first connection
        /// </summary>
        public bool isConnection = false;
        /// <summary>
        /// Stores the socket used for networking
        /// </summary>
        public Socket socket = null;
        /// <summary>
        /// Buffer size
        /// </summary>
        public const int BufferSize = 1024;
        /// <summary>
        /// bool buffer
        /// </summary>
        public byte[] buffer = new byte[BufferSize];
        /// <summary>
        /// delegate that determines what to do once it recieves input from the server
        /// </summary>
        public Action<StateObject> cbFunction;
        /// <summary>
        /// stores leftover info
        /// </summary>
        public StringBuilder sb = new StringBuilder();

    }

    /// <summary>
    /// Group of static methods to aid in networking
    /// </summary>
    public static class Controller
    {
        /// <summary>
        /// attempt to connect to the server via a provided hostname. It save the callback function
        ///  (in a state object) for use when data arrives. It also open a socket and then use the BeginConnect method
        /// </summary>
        /// <param name="cbFunction">a callback function called when data arrives</param>
        /// <param name="hostname">hostname to connect to</param>
        /// <returns></returns>
        public static Socket Connect_to_Server(Action<StateObject> cbFunction, string hostname)
        {
            int port = 11000;
            TcpClient client = new TcpClient(hostname, port);
            //Socket socket = new Socket(client.Client, UTF8Encoding);
            Socket socket = client.Client;

            //Creates new state
            StateObject state = new StateObject();
            //saves the socket and callback function
            state.socket = socket;
            state.cbFunction = cbFunction;

            //Ask server for stuff
            socket.BeginConnect(hostname, port, new AsyncCallback(Connected_to_Server), state);
            return socket;
        }

        /// <summary>
        /// called once a successful connection to server is made
        /// </summary>
        /// <param name="ar"></param>
        public static void Connected_to_Server(IAsyncResult ar)
        {
            //retrive info from stored state
            StateObject state = (StateObject)ar.AsyncState;
            state.isConnection = true;
            //calls the function to let it know that the connection was successful
            state.cbFunction(state);

            //
            state.socket.BeginReceive(state.buffer, 0, StateObject.BufferSize, 0, new AsyncCallback(ReceiveCallback), state);


        }

        /// <summary>
        /// method that is called once the server sends back data
        /// </summary>
        /// <param name="ar"></param>
        public static void ReceiveCallback(IAsyncResult ar)
        {

            //Retrieve the state object and socket
            StateObject state = (StateObject)ar.AsyncState;
            Socket socket = state.socket;

            //Read the available data
            int bytesRead = socket.EndReceive(ar);

            //if server closed, flag the state as about the connection
            if (bytesRead == 0)
                state.isConnection = true;

            state.cbFunction(state);


        }

        /// <summary>
        /// requires more data from the server, opens connection again.
        /// </summary>
        /// <param name="state"></param>
        public static void i_want_more_data(StateObject state)
        {

            //Get socket from state passed in
            Socket socket = state.socket;

            //Get data
            socket.BeginReceive(state.buffer, 0, StateObject.BufferSize, 0, new AsyncCallback(ReceiveCallback), state);


        }

        /// <summary>
        /// sends data to the server
        /// </summary>
        /// <param name="socket"></param>
        /// <param name="data"></param>
        public static void Send(Socket socket, String data)
        {
            //Convert the string data tobyte data using UTF-8
            byte[] byteData = Encoding.UTF8.GetBytes(data);

            //Begin sending to remote server
            socket.BeginSend(byteData, 0, byteData.Length, 0, new AsyncCallback(SendCallBack), socket);
        }

        /// <summary>
        /// deals with what bad sends
        /// </summary>
        /// <param name="ar"></param>
        private static void SendCallBack(IAsyncResult ar)
        {
            try
            {
                // Retrieve the socket from the state object.
                Socket socket = (Socket)ar.AsyncState;

                // Complete sending the data to the remote device.
                int bytesSent = socket.EndSend(ar);

            }
            catch (Exception e)
            {
                Console.WriteLine(e.ToString());
            }


        }
    }
}

