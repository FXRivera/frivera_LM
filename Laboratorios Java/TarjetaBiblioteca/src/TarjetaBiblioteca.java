import java.util.Scanner;
public class TarjetaBiblioteca{
    public static void main(String[] args) throws Exception {
        Scanner scanner = new Scanner(System.in);

        //Solicitar al usuario que ingrese el estado de la tarjeta
        System.out.print("Ingrese el estado de su tarjeta de biblioteca (1 para activo y 2 para inactivo): ");
        int estadoTarjeta = scanner.nextInt();

        //verificar si la tarjeta está activa o inactiva
        if(estadoTarjeta == 1){
            //tarjeta activa
            System.out.println("Su tarjeta está activa. Usted puede realizar préstamos.");
        }

        if(estadoTarjeta == 2){
            //tarjeta inactiva
            System.out.println("Su tarjeta está inactiva. No se permiten préstamos.");
        }
        scanner.close();
    }
}