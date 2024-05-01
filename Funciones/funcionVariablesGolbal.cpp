#include <iostream>

using namespace std;

double descuento = 0.15; //Variable global
double sueldo; //Variable global 

//Función
double pago(double b){
          return b * descuento;        
}

int main(){

double ventas; // Variable local

//Entrada
cout << "Ingrese el total de las ventas hechas:";
cin >> ventas;

sueldo = pago(ventas); //LLamada de función 

cout << "El pago por las ventas es: $"<< sueldo; //Saida

return 0;
}