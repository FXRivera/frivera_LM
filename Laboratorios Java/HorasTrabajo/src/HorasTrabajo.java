import java.util.Scanner;

public class HorasTrabajo {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        //definicion de variables
        int i = 1;
        int sumaHorasTrabajadas = 0;
        int horasTrabajadas = 0;
        int overtime = 0;
        int sumaOvertime = 0;
        double pagoNeto, pagoNetoOvertime, pagoBruto, pagoBrutoOvertime;

        System.out.println("Pago por hora: $15");

        //veces en la que se repetirá la pregunta
        while(i <= 3){

            //pide la cantidad de horas de cada empleado
            System.out.print("Ingrese la cantidad de horas del empleado #"+ i +": ");
            horasTrabajadas = scanner.nextInt();
            i++; //se suma por sí mismo hasta su límite de veces

            //si las horas sobrepasan de 40, se cuentan las horas demás
            if(horasTrabajadas > 40){
                overtime = horasTrabajadas - 40;
                sumaOvertime = sumaOvertime + overtime;

                horasTrabajadas = horasTrabajadas - sumaOvertime;
            }

            //acumula las horas de todos los empleados
            sumaHorasTrabajadas = sumaHorasTrabajadas + horasTrabajadas;
        }

        //se añade el pago de las horas y luego se añade el descuento
        pagoBruto = sumaHorasTrabajadas * 15;
        pagoNeto = pagoBruto - (pagoBruto * 0.07);

        //se añade el pago de las horas overtime y luego se añade el descuento
        pagoBrutoOvertime = sumaOvertime * (15 * 2);
        pagoNetoOvertime = pagoBrutoOvertime - (pagoBrutoOvertime * 0.07);
        
        //imprime el total pagado en nómina, el total pagado en overtime y el total de horas overtime
        System.out.println("Total pagado en nómina: $"+ pagoNeto);
        System.out.println("Total pagado en overtime: $"+ pagoNetoOvertime);
        System.out.println("Total de horas overtime: "+ sumaOvertime);

        //cierra el scanner
        scanner.close();
    }
}