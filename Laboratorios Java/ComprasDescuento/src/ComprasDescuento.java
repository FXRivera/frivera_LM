import java.util.Scanner;
public class ComprasDescuento {
    public static void main(String[] args) throws Exception {
        Scanner scanner = new Scanner(System.in);

        //solicitar al usuario el precio de sus compras
        System.out.print("¿Cuánto cuesta lo que hizo en compras?: $");
        double costoCompra = scanner.nextDouble();

        //pregunta al usuario si tiene tarjeta VIP
        System.out.print("¿Usted tiene una tarjeta de membresía VIP? Seleccione 1 para sí, y 0 para no: ");
        int tarjetaVIP = scanner.nextInt();

        //para determinar si su compra es de o sobrepasa $150, o si tiene tarjeta VIP
        if(costoCompra >= 150 || tarjetaVIP == 1){
            //aplica el descuento
            System.out.println("Es elegible para un descuento.");
        }
        
        else{
            //nega el descuento
            System.out.println("No es elegible para un descuento.");
        }
        scanner.close();
    }

}
