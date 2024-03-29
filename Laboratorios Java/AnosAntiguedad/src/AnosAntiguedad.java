import java.util.Scanner;

public class AnosAntiguedad{
    public static void main(String[]args){
        Scanner scanner = new Scanner(System.in);

        System.out.print("Ingrese la antiguedad del empleado (en años): ");
        int antiguedad = scanner.nextInt();

        if(antiguedad >= 5){
            System.out.println("Es elegible para el bono, recibirá $1000.");
        }
        else{
            System.out.println("El empleado no es elegible para el bono.");
        }
        scanner.close();
    }
}