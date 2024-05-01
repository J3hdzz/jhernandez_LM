#include <iostream>

using namespace std;

int main() {
  // declaracion de variables
  double sumaTemperaturas = 0;
  double temperatura;
  int i;

  // ciclo for para pedir las temperaturas
  for (i = 0; i < 12; i++) {
    cout << "Ingrese la temperatura del mes " << i + 1 << ": ";
    cin >> temperatura;
    sumaTemperaturas = temperatura + sumaTemperaturas; // suma de temperaturas
  }
  // Proceso para calcular el promedio y imprimirlo
  cout << " El peromedio de las temperaturas es: " << sumaTemperaturas / 12;

  return 0;
}