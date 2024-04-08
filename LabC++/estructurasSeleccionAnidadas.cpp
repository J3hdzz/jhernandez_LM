#include <iostream>

using namespace std;

int main() 
{
    // Variables para almacenar información sobre la compra
    int miembroTeatro;
    int numEntradas;
    
    
    // Entrada de datos
    cout << "¿Es miembro del teatro? (1 para sí, 0 para no): ";
    cin >> miembroTeatro;
    cout << "Ingrese el número de entradas compradas: ";
    cin >> numEntradas;
    
    // Aplicar descuentos según las reglas

    if (miembroTeatro > 1 || miembroTeatro < 0){
        cout << "Por favor, ingrese un numero valido.";
    }
    else{



    if (miembroTeatro == 1) {
        if (numEntradas > 5) {
           cout << "Usted aplica para un 15% de descuento."; // Descuento del 15% para miembros que compran más de 5 entradas
        } else {
            cout << "Usted aplica para un 10% de descuento."; // Descuento del 10% para miembros que compran hasta 5 entradas
        }
    } else {
        if (numEntradas > 10) {
            cout << "Usted aplica para un 5% de descuento."; // Descuento del 5% para no miembros que compran más de 10 entradas
        }
        else 
        {
            cout << "Usted no aplica para ningun descuento.";
        }
      }
    }
    return 0;
}

        
   
