#include <iostream>

using namespace std;

int main(){
double ventas, sueldoDescuento;

cout << "Ingrese el total de las ventas hechas:";
cin >> ventas;

 if (ventas >= 1500){ //Calcular sueldo y añadir 125 si es mayor a 1500
          sueldoDescuento =  ventas * 0.15 + 125;
        } else { //Calcular sueldo 
            sueldoDescuento = ventas * 0.15;
        }

cout << "El pago por las ventas es: $"<< sueldoDescuento; //Saida

return 0;

}