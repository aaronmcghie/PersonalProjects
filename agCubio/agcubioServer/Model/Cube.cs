using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Drawing;
using Newtonsoft.Json;

namespace Model
{
    /// <summary>
    /// Class to store data necessary for cube objects
    /// </summary>
    [JsonObject(MemberSerialization.OptIn)]
    public class Cube
    {
        //fields to hold all specifications of cube

        private double width, top, left, bottom, right;

        [JsonProperty]
        private double loc_x;
        [JsonProperty]
        private double loc_y;
        [JsonProperty]
        private int argb_color;
        [JsonProperty]
        private int uid;
        [JsonProperty]
        private int team_id;
        [JsonProperty]
        private bool food;
        [JsonProperty]
        private string Name;
        [JsonProperty]
        private double Mass;


        /// <summary>
        /// Constructor to create a new cube with necessary data
        /// </summary>
        /// <param name="id"></param>
        /// <param name="team_id"></param>
        /// <param name="cubeColor"></param>
        /// <param name="name"></param>
        /// <param name="mass"></param>
        /// <param name="isFood"></param>
        [JsonConstructor]
        public Cube(double x, double y, int cubeColor, int id, int team_id, bool isFood, String name, double mass)
        {
            ID = id;   //sets object id
            XPos = x;  //sets x loc
            YPos = y;  //sets y loc
            CubeColor = cubeColor; //sets color
            CubeName = name;  //sets the name property
            CubeMass = mass;  //sets mass along with width, top, left, bottom, and right
            IsFood = isFood;  //sets if its food
            TeamID = team_id; // sets teamID
        }

        public int TeamID
        {
            set
            {
                team_id = value;
            }
            get
            {
                return team_id;
            }
        }
        /// <summary>
        /// getter and setter methods
        /// </summary>
        public double Width
        {
            protected set
            {
                width = value;

            }
            get
            {
                return width;
            }
        }
        /// <summary>
        /// Get location of top of cube
        /// </summary>
        public double Top
        {
            protected set
            {
                top = value;
            }
            get
            {
                return top;
            }
        }

        /// <summary>
        /// Right side of cube location
        /// </summary>
        public double Right
        {
            protected set
            {
                right = value;
            }
            get
            {
                return right;
            }
        }
        /// <summary>
        /// Left side of cube location
        /// </summary>
        public double Left
        {
            protected set
            {
                left = value;
            }
            get
            {
                return left;
            }
        }

        /// <summary>
        /// Bottom side of cube
        /// </summary>
        public double Bottom
        {
            protected set
            {
                bottom = value;
            }
            get
            {
                return bottom;
            }
        }

        /// <summary>
        /// Cube ID
        /// </summary>
        public int ID
        {
            get { return uid; }
            set { uid = value; }
        }

        /// <summary>
        /// X pos of cube center
        /// </summary>
        public double XPos
        {
            get { return loc_x; }
            set
            {
                loc_x = value;
                changeDimensions();
            }

        }

        /// <summary>
        /// Y pos of cube center
        /// </summary>
        public double YPos
        {
            get { return loc_y; }
            set
            {
                loc_y = value;
                changeDimensions();
            }

        }
        /// <summary>
        /// Represents color of cube in rgb
        /// </summary>
        public int CubeColor
        {
            get { return argb_color; }
            set { argb_color = value; }
        }

        /// <summary>
        /// Name of the cube
        /// </summary>
        public string CubeName
        {
            get { return Name; }
            set { Name = value; }
        }
        /// <summary>
        /// Mass (volume) of the cube
        /// </summary>
        public double CubeMass
        {
            get
            {
                return Mass;
            }
            set
            {
                Mass = value;
                //Width = Math.Pow(value,.5);
                //Width = Math.Pow(value,1.0/2);
                changeDimensions();
            }
        }
        /// <summary>
        /// Tracks if the cube is a food
        /// </summary>
        public bool IsFood
        {
            get { return food; }
            set { food = value; }
        }

        /// <summary>
        /// helper method used to change dimensions of cube when mass or position are changed
        /// </summary>
        public void changeDimensions()
        {
            Width = Math.Pow(Mass, .65);
            //Width = Math.Pow(value,1.0/2);
            Top = loc_y - width / 2;
            Bottom = loc_y + width / 2;
            Left = loc_x - width / 2;
            Right = loc_x + width / 2;
        }
    }
}
