#include <iostream>

using namespace std;

void Saludar(string nombre)
{
    cout << "Hola " << nombre << "!" << endl;
}

int main(){
    string nombreIngresado;

    cout << "Ingrese su nombre: ";
    cin >> nombreIngresado;

    Saludar(nombreIngresado);
    

    return 0;
}