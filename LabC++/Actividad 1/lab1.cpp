#include <iostream>

using namespace std;

int main() 
{
  float exam1, exam2, exam3, exam4, promedio; // Definicion de variables

  // Ingreso de datos
  cout <<"Ingrese la nota del primer examen: ";
    cin >> exam1;

  cout <<"Ingrese la nota del segundo examen: ";
    cin >> exam2;

  cout <<"Ingrese la nota del tercer examen: ";
    cin >> exam3;

  cout <<"Ingrese la nota del cuarto examen: "; 
    cin >> exam4;

  // Proceso
  promedio = (exam1 + exam2 + exam3 + exam4) / 4;

  // Salida
  cout << "El promedio de las notas es: " << promedio << endl;

  return 0;
}