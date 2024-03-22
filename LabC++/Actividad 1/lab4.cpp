#include <iostream>

using namespace std;

int main() 
{
  // Definicion de variables
  double lado, area;

  // Ingreso de datos
  cout <<"Ingrese la medida del lado: ";
  cin >> lado;

  // Proceso
  area = lado * lado;

  // Salida
  cout <<"El area del cuadrado es: "<<area << endl;

  return 0;
}