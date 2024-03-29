using System;
namespace AnosAntiguedad{
    class Program{
        static void Main(string[]args){
            Console.Write("Ingrese los años que ha trabajado en la empresa: ");
            double antiguedad = double.Parse(Console.ReadLine());

            if(antiguedad >= 5)
            Console.WriteLine("Es elegible para el bono, recibirá $1000.");

            if(antiguedad < 5)
            Console.WriteLine("El empleado no es elegible para el bono.");
        }
    }
}