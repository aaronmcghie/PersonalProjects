using Model;
using System;
using System.Collections.Generic;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace View
{
    /// <summary>
    /// Class to deal with the viewport
    /// </summary>
    public class Viewport
    {
        private Cube cube;

        //Variable that determine the viewport
        private double left;
        private double right;
        private double bottom;
        private double top;
        private double viewportWidth=1000;
        //Game actual width
        private double range;
        private double playerMass;

        private double scale;
        /// <summary>
        /// initializes viewport
        /// </summary>
        /// <param name="cube">cube the viewport is centered on</param>
        public Viewport(Cube cube, List<Cube> team)
        {

            setTeamInfo(team);
            this.cube = cube;
            setCenterCube(cube);

        }

        /// <summary>
        /// Returns the center cube
        /// </summary>
        public Cube CenterCube
        {
            get { return cube; }
        }
        public void setTeamInfo(List<Cube> team)
        {
            playerMass = 0;
            foreach (Cube c in team)
                playerMass += c.CubeMass;
        }
        
        /// <summary>
        /// recalculates the viewport based on cube
        /// </summary>
        /// <param name="cube">centered cube</param>
        public void setCenterCube(Cube cube)
        {
            double playerWidth = Math.Pow(playerMass, .65);
            scale = viewportWidth / playerWidth / 7;
            Range = 1000* scale;
            setDimensions();
        }

        /// <summary>
        /// range of the viewport
        /// </summary>
        private double Range
        {
            get { return range; }
            set
            {
                if (value > 10000)
                    range = 10000;
                else
                    range = value;
            }
        }

        /// <summary>
        /// checks if the cube is within the viewport
        /// </summary>
        /// <param name="cube"></param>
        /// <returns></returns>
        public bool isInViewPort(Cube cube)
        {
            if (cube.Right > left || cube.Left < right || cube.Top < bottom || cube.Bottom> top)
                return true;
            return false;
        }

        /// <summary>
        /// normalize the cube position to a 1000 scale
        /// </summary>
        /// <param name="input">input cube</param>
        /// <returns></returns>
        public Cube normalizeCube( Cube input)
        {
            double X = scale*input.XPos;
            double Y = scale*input.YPos;

            double centerX = scale * cube.XPos;
            double centerY = scale * cube.YPos;

            double newX = 500 - centerX + X;
            double newY = 500 - centerY + Y;
            Cube result = new Cube(newX,newY,input.CubeColor,input.ID,input.TeamID,input.IsFood,input.CubeName,input.CubeMass*scale*scale);
            result.changeDimensions();
            return result;
        }
        /// <summary>
        /// reverse the normalization process for mouse points
        /// </summary>
        /// <param name="p">normalized point from viewport</param>
        /// <returns></returns>
        public Point reverseXY(Point p)
        {
            double x = p.X;
            double y = p.Y;
            double newX = (x - 500 + scale * cube.XPos) / scale;
            double newY = (y - 500 + scale * cube.XPos) / scale;
            return new Point((int)newX, (int)newY);
        }

        /// <summary>
        /// updates cube positions
        /// </summary>
        private void setDimensions()
        {
           // double verticalAdjust;
           // double horizAdjust;
            top = cube.YPos - viewportWidth / 2;
           // verticalAdjust = Math.Max(0, 0);
            bottom = cube.YPos + viewportWidth / 2;

            left = cube.XPos - viewportWidth / 2;
          //  horizAdjust = Math.Max(0, 0);
            right = cube.XPos +viewportWidth / 2 ;
        }

        /// <summary>
        /// left of viewport
        /// </summary>
        public double Left
        {
            get { return left; }
        }

        /// <summary>
        /// right of viewport
        /// </summary>
        public double Right
        {
            get { return right; }
        }

        /// <summary>
        /// bottom of viewport
        /// </summary>
        public double Bottom
        {
            get { return bottom; }
        }

        /// <summary>
        /// top of viewport
        /// </summary>
        public double Top
        {
            get { return top; }
        }
    }
}
