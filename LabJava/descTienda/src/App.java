import java.util.Scanner;

public class App {
    public static void main(String[] args) throws Exception 
    {

        Scanner scanner = new Scanner(System.in);

        //Entrada de datos necesarios
        System.out.print("Ingrese el total de sus compras: ");
        int totalCompras = scanner.nextInt();

        System.out.print("¿Tiene la tarjeta de memebresia VIP activada?(0 para no, 1 para si): ");
        int membresiaVIP = scanner.nextInt();

        //Proceso para que no se introduzca un número que no sea ni 1 ni 0 
        if(membresiaVIP != 1 && membresiaVIP != 0)
            {System.out.print("Ingrese un numero valido.(0 / 1)");}

        //Proceso para determinar si cumple con una de las condiciones necesarias 
        else{    
            if(membresiaVIP == 1 || totalCompras > 150)
            {System.out.print("Usted aplica para el descuento.");}
            
            else
                {System.out.print("Lo siento, no aplicas para el descuento.");}
        
        }
    }
} 
