using System;
namespace EvaluacionEstudiante
{
    class Program
    {
        static void Main(string[]args)
        {
            Console.Write("Ingrese la nota del estudiante (0-20): ");
            double nota = double.Parse(Console.ReadLine());

            if(nota >= 11)
            {
                Console.WriteLine("El estudiante aprobó la prueba.");
            }
            else
            {
                Console.WriteLine("El estudiante no aprobó la prueba.");
            }
        }
    }
}