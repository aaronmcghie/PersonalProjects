using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Model
{
    /// <summary>
    /// World class which holds all the cubes, and any other necessary data about the world
    /// </summary>
    public class World
    {
        //Fields for world data
        private const int worldWidth = 1000;
        private const int worldHeight = 1000;
        private const int hearbeatsPerSecond = 100;
        private const int topSpeed = 100;
        private const int lowSpeed = 10;
        private const int attritionRate = 100;
        private const int foodValue = 1;
        private const int playerStartMass = 150;
        private const int maxFood = 5000;
        private const double minimumSplitMass = 150;
        private const double maximumSplitDistance = 300;
        private const int maximumSplits = 10;
        private const double absorbDistanceDelta = 150;
        private Dictionary<int, Cube> worldCubes;               //Used dictionary to hold all cubes in order to make them more quickly accessible with id
        private int foodNum = 0;
        private int playersNum = 0;


        /// <summary>
        /// 2 arg constructor that takes in a width and height of the world and sets them, then creates a dictionary
        /// </summary>
        /// <param name="worldWidth"></param>
        /// <param name="worldHeight"></param>
        public World()
        {
            worldCubes = new Dictionary<int, Cube>();
        }
        
        /// <summary>
        /// Stores the world width
        /// </summary>
        public int WorldWidth
        {
            get { return worldWidth; }
        }

        /// <summary>
        /// Stores the world height
        /// </summary>
        public int WorldHeight
        {
            get { return worldHeight; }
        }



        /// <summary>
        /// Getter and setter for the worldMap
        /// </summary>
        public Dictionary<int,Cube> WorldMap
        {
            get
            {
                return worldCubes;
            }
            set
            {
                worldCubes = value;
            }
        }
        
    }
}
