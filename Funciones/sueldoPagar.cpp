//Desarrolle un programa que permita determinar a través de una FUNCION el sueldo a pagar para un vendedor
// a base de un 15% de las ventas realizadas.
//Si el vendedor realizó 1500 dólares o más en ventas se pagará un bono adicional de $125 dólares.

#include <iostream>

using namespace std;

//Función
double pago(double b){
        if (b >= 1500){ //Calcular sueldo y añadir 125 si es mayor a 1500
          return b * 0.15 + 125;
        } else { //Calcular sueldo 
            return b * 0.15;
        }
}

int main(){
double ventas;
//Entrada
cout << "Ingrese el total de las ventas hechas:";
cin >> ventas;

double sueldoDescuento = pago(ventas); //LLamada de función 

cout << "El pago por las ventas es: $"<< sueldoDescuento; //Saida

return 0;

}