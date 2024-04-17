import java.util.Scanner;

public class PromedioTemperaturas {
    public static void main(String[] args) throws Exception {
        Scanner scanner = new Scanner(System.in);

        //definicion de variables
        int i = 1;
        double promedio;
        double temp = 0;
        double sumaTemp = 0;

        //condicion de que i debe ser menor o igual a 12 para que ejecute
        while(i <= 12){

            System.out.println("Temperatura "+ i);
            System.out.print("Ingrese la temperatura: "); //pide al usuario que ingrese las temperaturas
            temp = scanner.nextDouble(); //se almacena el valor ingresado por el usuario
            i++;

            sumaTemp = sumaTemp + temp;
        }
        promedio = sumaTemp/12;
        
        //imprime el promedio de las temperaturas
        System.out.println("El promedio de las temperaturas del año es: "+ promedio +"º");

        //cierra el scanner
        scanner.close();
    }
}