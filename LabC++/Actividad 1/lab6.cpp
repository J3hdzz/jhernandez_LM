#include <iostream>

using namespace std;

int main() 
{
  // Definicion de variables
  double area, base, altura, perimetro;

  // Ingreso de datos
  cout <<"Ingrese la base del rectangulo: ";
  cin >> base;

  cout <<"Ingrese la altura del rectangulo: ";
  cin >> altura;

  // Proceso
  area = base * altura;
  
  perimetro = 2 * (base + altura);

  // Salida
  cout <<"El area del rectangulo es: " << area << endl;
  cout <<"El perimetro del rectangulo es: " << perimetro << endl;

  return 0;
}