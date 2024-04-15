#include <iostream>

using namespace std;

int main(){
    string nombre;
    int i; // variable de contador 

    // Entrada del nombre
    cout << "Ingrese su nombre:";
    cin >> nombre;

    // El iniciador empieza en 0 y termina en 9 reproduciendolo 10 veces 
    for(i = 0; i < 10; i = i + 1)
    { // Ciclo que se repite
        cout << "Hola " << nombre << endl;
    }

    return 0;
}