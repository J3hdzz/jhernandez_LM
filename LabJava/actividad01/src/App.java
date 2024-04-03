import java.util.Scanner;

public class App {
    public static void main(String[] args) throws Exception
    {
        Scanner scanner = new Scanner(System.in);

        System.out.print("Ingrese el estado de su tarjeta de bibloteca (1 para activo y 2 para inactiva):");
        int estadoTarjeta = scanner.nextInt();

        if(estadoTarjeta == 1)
        {
            System.out.println("Su tarjeta esta activa. Usted puede realizar prestamos.");
        }

        if (estadoTarjeta == 2)
        {
            System.out.println("Su tarjeta esta inactiva. Usted no puede realizar prestamos.");
        }
    }
}
