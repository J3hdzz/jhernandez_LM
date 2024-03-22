#include <iostream>

using namespace std;

int main() 
{
  // Definicion de variables
  double nacimiento, year, edad;
  year = 2024;

  // Ingreso de datos
  cout <<"Ingrese el año de nacimiento: ";
  cin >> nacimiento;

  // Proceso
  edad = year - nacimiento;

  // Salida
  cout <<"La edad es "<<edad <<" para el "<<year << endl;

  return 0;
  
}