import java.util.Scanner;
public class ExamenPrueba {
    public static void main(String[]args)
    {
        Scanner scanner = new Scanner(System.in);

        double sumaCalificacion = 0;
        double promedio;
        double calificacion;

        for(int i = 1; i <= 3; i++){
            System.out.print("Ingrese calificación " + i + ": ");
            calificacion = scanner.nextDouble();

            sumaCalificacion = sumaCalificacion + calificacion;
        }
        promedio = sumaCalificacion/3;

        System.out.println("El promedio de las calificaciones es: " + promedio);

        scanner.close();
    }
}
