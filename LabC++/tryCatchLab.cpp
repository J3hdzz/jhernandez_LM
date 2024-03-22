#include <iostream>

using namespace std;

int main() {
    int numero;
  
  //Entrada de dato
    cout << "Ingrese un numero real: ";
    cin >> numero;

     //Proceso para determnar si es numero real o no
    try {
        if (cin.fail()) 
            throw ("Error: El valor ingresado no es un numero real"); //Error

        cout << "El numero real ingresado es: " << numero << endl; //NUmero real
    }
     catch (const char* mensaje) 
      {
        cout  << mensaje << endl;  //Salida del mensaje, si es correcto o error
      }

    return 0;
}
