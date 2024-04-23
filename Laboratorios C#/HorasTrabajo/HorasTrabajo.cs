using System;
namespace HorasTrabajo{
    class Program{
        static void Main(string[] args){
            
            //definicion de variables
            int i = 1;
            int sumaHorasTrabajadas = 0;
            int horasTrabajadas = 0;
            int overtime = 0;
            int sumaOvertime = 0;
            double pagoNeto, pagoNetoOvertime, pagoBruto, pagoBrutoOvertime;

            Console.WriteLine("Pago por hora: $15");

            //el ciclo se ejecuta al menos una vez, y sigue hasta su límite indicado
            do{
                
                Console.Write("Ingrese la cantidad de horas del empleado #"+ i +": ");
                horasTrabajadas = int.Parse(Console.ReadLine());
                i++;

                if(horasTrabajadas > 40){
                    overtime = horasTrabajadas - 40;
                    sumaOvertime = sumaOvertime + overtime;

                    horasTrabajadas = horasTrabajadas - sumaOvertime;
                }

                //acumula las horas de todos los empleados
                sumaHorasTrabajadas = sumaHorasTrabajadas + horasTrabajadas;
            }

            //la condición va a ejecutar al "do" mientras no llegue al límite
            while(i <= 3);

            //se añade el pago de las horas y luego se añade el descuento
            pagoBruto = sumaHorasTrabajadas * 15;
            pagoNeto = pagoBruto - (pagoBruto * 0.07);

            //se añade el pago de las horas overtime y luego se añade el descuento
            pagoBrutoOvertime = sumaOvertime * (15 * 2);
            pagoNetoOvertime = pagoBrutoOvertime - (pagoBrutoOvertime * 0.07);
            
            //imprime el total pagado en nómina, el total pagado en overtime y el total de horas overtime
            Console.WriteLine("Total pagado en nómina: $"+ pagoNeto);
            Console.WriteLine("Total pagado en overtime: $"+ pagoNetoOvertime);
            Console.WriteLine("Total de horas overtime: "+ sumaOvertime);
        }
    }
}