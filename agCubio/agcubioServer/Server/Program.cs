using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using Network_Controller;

namespace Server
{
    class Program
    {
        static void Main(string[] args)
        {
            Action<StateObject> function = callbackFunction;
            Controller.Server_Awaiting_Client_Loop(function);
        }

        private static void callbackFunction(StateObject state)
        {
            Console.WriteLine("We did it");
        }
    }
}
