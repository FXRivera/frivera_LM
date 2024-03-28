import java.util.Scanner;

public class NumeroPositivo 
{
    public static void main(String[]args)
    {
        Scanner scanner = new Scanner(System.in);

        System.out.print("Ingrese un número: ");

        int n = scanner.nextInt();

        if(n > 0)
        {
            System.out.println("El número es postivo.");
        }
        scanner.close();
    }
}