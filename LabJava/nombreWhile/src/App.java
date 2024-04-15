import java.util.Scanner;

public class App {
    public static void main(String[] args) throws Exception {
        
        // Crear un objeto Scanner para leer la entrada del usuario
        Scanner scanner = new Scanner(System.in);
        
        // Solicitar al usuario que ingrese su nombre
        System.out.print("Ingresa su nombre: ");
        String nombre = scanner.nextLine();
        
        // Contador en cero
        int contador = 0;
        
        // Salida de el nombre del usuario 
        while (contador < 10) {
            System.out.println("Hola " + nombre);
            contador++;
        }
        
    }
}
