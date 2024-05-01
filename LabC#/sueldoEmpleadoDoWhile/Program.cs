using System;

class Program
{
    static void Main()
    {
        double horasTrabajadas;
        double sueldoBruto;
        int i = 0;
        double pagoHora;
        double overtimeSueldo;
        double overtimeHoras;
        double descuento;
        double sueldoFinal;
        double totalPagoNomina = 0;
        double totalPagoOvertime = 0;
        double totalHorasOvertime = 0;

        Console.Write("Ingrese el pago por hora: $");
        pagoHora = Convert.ToDouble(Console.ReadLine());

        do 
        {
          i++;
            overtimeSueldo = 0; // Reiniciamos el sueldo de overtime
            overtimeHoras = 0;  // Reiniciamos las horas de overtime

            Console.WriteLine("-Empleado " + i + "-");
            Console.Write("Horas trabajadas de el empleado " + i + ": ");
            horasTrabajadas = Convert.ToDouble(Console.ReadLine());

            // Calculamos el sueldo si hace overtime
            if (horasTrabajadas > 40)
            {
                overtimeHoras = horasTrabajadas - 40;
                overtimeSueldo = overtimeHoras * (pagoHora * 2);
                sueldoBruto = (40 * pagoHora) + overtimeSueldo;
            }
            // Calculamos el sueldo si no hace overtime
            else
            {
                sueldoBruto = horasTrabajadas * pagoHora;
            }
          

            descuento = sueldoBruto * 0.07; // Calculamos el descuento de la nomina
            sueldoFinal = sueldoBruto - descuento;

            // Salida de datos del empleado
            Console.WriteLine("Sueldo: $" + sueldoFinal);
            Console.WriteLine("Overtime hecho: " + overtimeHoras);
            Console.WriteLine("Overtime Pagado: $" + overtimeSueldo + "\n");

            totalPagoNomina += sueldoFinal; // Suma de todos los pagos de em8pleados
            totalPagoOvertime += overtimeSueldo; // Suma de todos los pagos de overtime
            totalHorasOvertime += overtimeHoras; // Suma de todas las horas de overtime
        }while(i < 3);

        // Salida de datos generales
        Console.WriteLine("----------------------");
        Console.WriteLine("Total pagado en nomina: $" + totalPagoNomina);
        Console.WriteLine("Total overtime hecho: " + totalHorasOvertime);
        Console.WriteLine("Total overtime Pagado: $" + totalPagoOvertime);
    }
}

