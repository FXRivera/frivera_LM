using System;
namespace PromedioTemperatura{
    class Program{
        static void Main(string[] args){
            
            //definicion de variables
            int i = 1;
            double promedio;
            double temp = 0;
            double sumaTemp = 0;

            //el ciclo se ejecuta mientras i sea menor o igual que 12
            do{
                
            Console.WriteLine("Temperatura "+ i);
            Console.Write("Ingrese la temperatura: "); //pide al usuario que ingrese las temperaturas
            temp = double.Parse(Console.ReadLine()); //se almacena el valor ingresado por el usuario
            i++;
            
            sumaTemp = sumaTemp + temp;

            promedio = sumaTemp/12;

            }
            //condicion que ejecuta al do si es verdadera
            while(i <= 12);
            
            //imprime el promedio de las temperaturas
            Console.WriteLine("La temperatura promedio es: "+promedio+"º");
        }
    }
}