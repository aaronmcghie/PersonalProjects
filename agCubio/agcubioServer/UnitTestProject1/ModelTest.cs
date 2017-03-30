using System;
using Microsoft.VisualStudio.TestTools.UnitTesting;
using Model;

namespace UnitTestProject1
{
    [TestClass]
    public class ModelTest
    {
        [TestMethod]
        public void TopTest1()
        {
            Cube c = new Cube(100, 100, 1234567, 1, 0, true, "food", 1);
            Assert.AreEqual(c.Top, 99.5);
        }

        [TestMethod]
        public void FoodTypeTest1()
        {
            Cube c = new Cube(100, 100, 1235, 3, 0, true, "", 3);
            Cube c2 = new Cube(500, 500, 52, 5, 1, false, "", 4);
            Assert.AreNotEqual(c.IsFood, c2.IsFood);
        }

        [TestMethod]
        public void FoodTypeTest2()
        {
            World world = new World(1000, 1000);
            Cube c1 = new Cube(100, 100, 1235, 3, 0, true, "", 3);
            Cube c2 = new Cube(500, 500, 52, 5, 1, false, "", 4);
            Cube c3 = new Cube(100, 100, 1235, 6, 0, true, "", 3);
            Cube c4 = new Cube(100, 100, 1235, 7, 0, false, "", 3);
            world.WorldMap.Add(c1.ID, c1);
            world.WorldMap.Add(c2.ID, c2);
            world.WorldMap.Add(c3.ID, c3);
            world.WorldMap.Add(c4.ID, c4);
            int foodcount = 0, playercount = 0;
            foreach(Cube c in world.WorldMap.Values)
            {
                if (c.IsFood) foodcount++;
                else playercount++;
            }
            Assert.AreEqual(foodcount, playercount);
        }
        [TestMethod]
        public void CubeWidthTest()
        {
            Cube c = new Cube(1, 1, 1, 1, 10, true, "", 100);
            Assert.AreEqual(Math.Pow(100, .65), c.Width);
        }

        
    }
}
