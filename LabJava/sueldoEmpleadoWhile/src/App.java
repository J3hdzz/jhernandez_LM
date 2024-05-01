import java.util.Scanner;

public class App {
  public static void main(String[] args) {
    Scanner scanner = new Scanner(System.in);
    double horasTrabajadas;
    int i = 0;
    double sueldoBruto;
    double pagoHora;
    double overtimeSueldo;
    double overtimeHoras;
    double descuento;
    double sueldoFinal;
    double totalPagoNomina = 0;
    double totalPagoOvertime = 0;
    double totalHorasOvertime = 0;

    System.out.print("Ingrese el pago por hora: $");
    pagoHora = scanner.nextDouble();

    while (i < 3) {
      i++;

      overtimeSueldo = 0; // Reiniciamos el sueldo de overtime
      overtimeHoras = 0; // Reiniciamos las horas de overtime

      System.out.println("-Empleado " + i + "-");
      System.out.print("Horas trabajadas del empleado " + i + ": ");
      horasTrabajadas = scanner.nextDouble();

      // Calculamos el sueldo si hace overtime
      if (horasTrabajadas > 40) {
        overtimeHoras = horasTrabajadas - 40;
        overtimeSueldo = overtimeHoras * (pagoHora * 2);
        sueldoBruto = (40 * pagoHora) + overtimeSueldo;
      } else {
        sueldoBruto = horasTrabajadas * pagoHora;
      }

      descuento = sueldoBruto * 0.07; // Calculamos el descuento de la nomina
      sueldoFinal = sueldoBruto - descuento;

      // Salida de datos del empleado
      System.out.println("Sueldo: $" + sueldoFinal);
      System.out.println("Overtime hecho: " + overtimeHoras);
      System.out.println("Overtime Pagado: $" + overtimeSueldo + "\n");

      totalPagoNomina += sueldoFinal; // Suma de todos los pagos de empleados
      totalPagoOvertime += overtimeSueldo; // Suma de todos los pagos de overtime
      totalHorasOvertime += overtimeHoras; // Suma de todas las horas de overtime
    }

    // Salida de datos generales
    System.out.println("----------------------");
    System.out.println("Total pagado en nomina: $" + totalPagoNomina);
    System.out.println("Total overtime hecho: " + totalHorasOvertime);
    System.out.println("Total overtime Pagado: $" + totalPagoOvertime);
  }
}
