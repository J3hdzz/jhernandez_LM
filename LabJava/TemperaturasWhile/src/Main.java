import java.util.Scanner;

public class Main {
  public static void main(String[] args) {
  Scanner scanner = new Scanner(System.in);
  int contador = 1; //Contador para el ciclo
  double sumasTemperaturas = 0;
    
 //Ciclo para repetir los 12 meses 
while(contador <= 12)
{
  System.out.print(" Ingrese la temperatur del " + contador + " mes:" );
  double temperatura = scanner.nextDouble();
  sumasTemperaturas = temperatura + sumasTemperaturas; // sumas de las temperaturas
  contador = contador + 1; 
}
    System.out.println("El promedio de temperaturas es " + sumasTemperaturas/12); //Proceso para sacar el promedio de los 12 meses
    scanner.close(); 
  }

}



