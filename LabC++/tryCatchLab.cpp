#include <iostream>

using namespace std;

int main()
{
float numero;
int numEntero;

cout <<"Ingrese un numero entero: ";
cin >> numero;

numEntero = numero;

try
{
   if (numero != numEntero)
  {
   throw"El numero ingresado no es un numero entero.";
  }

  cout << "El numero entero ingresado es: " << numero << endl;
}

catch(const char* mensaje)
{
  cout << "Exepcion capturada.";
}

return 0;
}