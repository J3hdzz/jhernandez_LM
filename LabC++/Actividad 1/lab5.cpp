#include <iostream>

using namespace std;

int main() 
{
  // Definicion de variables
  double base, alura, area;

  // Ingreso de datos
  cout << "Ingrese la base: ";
  cin >> base;

  cout << "Ingrese la altura: ";
  cin >> alura;

  // Proceso
  area = base * alura;

  // Salida
  cout << "El area del rectangulo es: " << area << endl;

  return 0;
  
}