﻿using System;

namespace MyApp
{
    internal class Program
    {
        static void Main(string[] args)
        {
            Console.Write("Ingrese un número entero: ");
            int entero = int.Parse(Console.ReadLine());
        
            Console.Write("Ingrese un número flotante: ");
            float flotante = float.Parse(Console.ReadLine());
        
            Console.Write("Ingrese un carácter: ");
            char caracter = char.Parse(Console.ReadLine());
        
            Console.Write("Ingrese una cadena de caracteres: ");
            string cadena = Console.ReadLine();

            Console.WriteLine();
             Console.WriteLine("EL numero entero entrado fue: {0}",entero);
             Console.WriteLine("EL numero flotante entrado fue: {0}",flotante);
             Console.WriteLine("EL numero caracter entrado fue: {0}",caracter);
             Console.WriteLine("EL numero cadena entrado fue: {0}",cadena);



        }
    }
}