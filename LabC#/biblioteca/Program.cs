using System;

class Program
{
    static void Main()
    {
        //Solicitar al usuario que ingrese la antigüedad del empleado en años
        Console.Write("Ingrese la antigüedad del empleado (en años): ");
        int antiguedad = int.Parse(Console.ReadLine());

        // Verificar si la antigüedad es igual o mayor a 5 años.
        if (antiguedad >= 5)
        {
            Console.WriteLine("Es elegible para el bono, recibirá $1000.");
        }
        else
        {
            //Menor a 5 años, no es elegible para el bono.
            Console.WriteLine("El empleado no es elegible para el bono.");
        }
    }
}

