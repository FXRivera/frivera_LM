import java.util.Scanner;

public class Nombre10VecesFor {
    public static void main(String[] args) throws Exception {
        Scanner scanner = new Scanner(System.in);

        //le pide al usuario que ingrese su nombre
        System.out.print("Igrese su nombre: ");

        //ell nombre ingresado se almacena
        String nombre = scanner.nextLine();

        //la i se suma hasta 10
        for(int i = 1; i <= 10; i++){

            //imprime el número de veces hasta donde sumó
            System.out.println("Hola "+ nombre +"!");
        }
        scanner.close();
    }
}