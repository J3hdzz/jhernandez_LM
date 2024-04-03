#include <iostream>
using namespace std;

int main() {
    int estadoTarjeta;

    // Solicitar al usuario que ingrese el estado de su tarjeta de biblioteca (activo o inactivo)
    cout << "Ingrese el estado de su tarjeta de biblioteca (1 para activa y 2 para inactiva): ";
    cin >> estadoTarjeta;

    // Verificar el estado de la tarjeta y mostrar el mensaje correspondiente
    if (estadoTarjeta == 1) {
        cout << "Su tarjeta está activa. Usted puede realizar préstamos." << endl;
    } 
    else if (estadoTarjeta == 2) {
        cout << "Su tarjeta está inactiva. Usted no puede realizar préstamos." << endl;
    } 

    return 0;
}
