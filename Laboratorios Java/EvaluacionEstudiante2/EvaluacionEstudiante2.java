import java.util.Scanner;

public class EvaluacionEstudiante2
{
    public static void main(String[]args)
    {
        Scanner sc = new Scanner(System.in);
        System.out.print("Ingrese la nota del estudiante (0-20): ");
        double nota = sc.nextDouble();

        if(nota >= 11)
        {
            System.out.println("El estudiante aprobó la prueba.");
        }
        else
        {
            System.out.println("El estudiante no aprobó la prueba.");
        }
        sc.close();
    }
}