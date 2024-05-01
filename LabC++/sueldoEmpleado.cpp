#include <iostream>

using namespace std;

int main() {
  double horasTrabajadas;
  int i;
  double sueldoBruto;
  double pagoHora;
  double overtimeSueldo;
  double overtimeHoras;
  double descuento;
  double sueldoFinal;
  double totalPagoNomina = 0;
  double totalPagoOvertime = 0;
  double totalHorasOvertime = 0;

  cout << " Ingrese el pago por hora: $";
  cin >> pagoHora;

  for (i = 1; i < 4; i++) {
    overtimeSueldo = 0; // Reiniciamos el sueldo de overtime
    overtimeHoras = 0;  // Reiniciamos las horas de overtime

    cout << "-Empleado " << i << "-" << endl;
    cout << "Horas trabajadas de el empleado " << i << ": ";
    cin >> horasTrabajadas;

    // Calculamos el sueldo si hace overtime
    if (horasTrabajadas > 40) {
      overtimeHoras = horasTrabajadas - 40;
      overtimeSueldo = overtimeHoras * (pagoHora * 2);
      sueldoBruto = (40 * pagoHora) + overtimeSueldo;

      // Calculamos el sueldo si no hace overtime
    } else {
      sueldoBruto = horasTrabajadas * pagoHora;
    }

    descuento = sueldoBruto * 0.07; // Calculamos el descuento de la nomina
    sueldoFinal = sueldoBruto - descuento;

    // Salida de datos del empleado
    cout << "Sueldo: $" << sueldoFinal << endl;
    cout << "Overtime hecho: " << overtimeHoras << endl;
    cout << "Overtime Pagado: $" << overtimeSueldo << endl << endl;

    totalPagoNomina = totalPagoNomina + sueldoFinal; // Suma de todos los pagos de empleados
    totalPagoOvertime = totalPagoOvertime + overtimeSueldo; // Suma de todos los pagos de overtime
    totalHorasOvertime = totalHorasOvertime + overtimeHoras; // Suma de todas las horas de overtime
  }

  // Salida de datos generales
  cout << "----------------------" << endl;
  cout << "Total pagado en nomina: $" << totalPagoNomina << endl;
  cout << "Total overtime hecho: " << totalHorasOvertime << endl;
  cout << "Total overtime Pagado: $" << totalPagoOvertime << endl;

  return 0;
}