import java.util.Scanner;

public class Nombre10VecesFor {
    public static void main(String[] args) throws Exception {
        Scanner scanner = new Scanner(System.in);

        System.out.print("Igrese su nombre: ");
        String nombre = scanner.nextLine();

        for(int i = 1; i <= 10; i++){
            System.out.println("Hola "+ nombre +"!");
        }
        scanner.close();
    }
}
