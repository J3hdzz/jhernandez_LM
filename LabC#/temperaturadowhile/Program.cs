using System;

class Program
{
    static void Main(string[] args)
    {
        // Declarar variables
        int contador = 0;
        double sumaTemperaturas = 0;
        double temperatura;

        // Ciclo para recoger las temperaturas
        do
        {
            Console.Write("Ingrese la temperatura del mes {0}: ", contador + 1);
            if (double.TryParse(Console.ReadLine(), out temperatura))
            {
                sumaTemperaturas += temperatura;
                contador++;
            }
        } while (contador < 12);

        // Calcular promedio
        double promedio = sumaTemperaturas / 12;

        // Mostrar resultado
        Console.WriteLine("El promedio de las 12 temperaturas es: " + promedio);
    }
}

