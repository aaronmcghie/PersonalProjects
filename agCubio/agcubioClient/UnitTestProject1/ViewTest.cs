using System;
using Microsoft.VisualStudio.TestTools.UnitTesting;
using Model;
using View;
using System.Collections.Generic;

namespace TestProject
{
    [TestClass]
    public class ViewTest
    {
        [TestMethod]
        public void ViewPortNormalizeTest1()
        {
            Cube c = new Cube(10, 10, 10000, 1, 1, false, "d", 100);
            List<Cube> temp = new List<Cube>();
            temp.Add(c);
            Viewport vp = new Viewport(c,temp);
            Cube c2 = new Cube(100, 100, 10000, 0,0, false, "f", 50);
            Cube norm = vp.normalizeCube(c2);
            double scale = 1000/ c.Width / 5;
            Assert.AreEqual(norm.CubeMass, c2.CubeMass*scale*scale);
        }

        [TestMethod]
        public void ViewPortNormalizeTest2()
        {
            Cube c = new Cube(10, 100, 10000, 1, 1, false, "d", 1000);
            List<Cube> temp = new List<Cube>();
            temp.Add(c);
            Viewport vp = new Viewport(c, temp);
            Cube c2 = new Cube(100, 100, 10000, 0, 0, false, "f", 50);
            Cube norm = vp.normalizeCube(c2);
            double scale = 1000 / c.Width / 5;
            Assert.AreEqual(norm.XPos, 500 - scale * c.XPos + c2.XPos*scale);
        }

        [TestMethod]
        public void InViewPortTest1()
        {
            Cube c = new Cube(10, 100, 10000, 1, 1, false, "d", 1000);
            List<Cube> temp = new List<Cube>();
            temp.Add(c);
            Viewport vp = new Viewport(c, temp);
            Cube c2 = vp.normalizeCube(new Cube(100, 100, 10000, 0, 0, false, "f", 50));
            Assert.IsTrue(vp.isInViewPort(c2));
        }

 /*       [TestMethod]
        public void InViewPortTest2()
        {
            Cube c = new Cube(1, 1, 10000, 1, 1, false, "d", 1);
            Viewport vp = new Viewport(c);
            Cube c2 = vp.normalizeCube(new Cube(1000, 1000, 10000, 0, 0, false, "f", 10));
            Assert.IsFalse(vp.isInViewPort(c2));
        }*/
    }
}
