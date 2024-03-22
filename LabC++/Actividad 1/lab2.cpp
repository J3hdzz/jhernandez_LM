#include <iostream>

using namespace std;

int main() 
{
  // Definicion de variables
double velocidad, tiempo, distancia;

  // Ingreso de datos
  cout <<"Ingrese la velocidad del viaje en m/h: ";
  cin >> velocidad;

  cout <<"Ingrese el tiempo del viaje en h: ";
  cin >> tiempo;

  // Proceso
  distancia = velocidad * tiempo;

  // Salida
  cout <<"La distancia recorrida es: "<<distancia
    << endl;

  return 0;

}