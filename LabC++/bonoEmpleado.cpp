#include <iostream>
using namespace std;

int main() {
    //Variable para almacenar la antigüedad del empleado.
    int antiguedad;

    // Solicitar al usuario que ingrese la antigüedad del empleado en años.
    cout << "Ingrese la antigüedad del empleado (en años): ";
    cin >> antiguedad;

    // Verificar si la antigüedad es igual o mayor a 5 años.
    if (antiguedad >= 5) {
        cout << "Es elegible para el bono, recibirá $1000." << endl;
    } 
    else {
        // Si no se cumple la condicion se muestra este mensaje.
        cout << "El empleado no es elegible para el bono." << endl;
    }

    return 0; 
}
