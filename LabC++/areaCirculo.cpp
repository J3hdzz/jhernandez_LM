#include <iostream>

using namespace std;

int main()
{
    //Definicion de variables
    double area, radio;  // Es lo mismso que añadir double radio;
    const double PI = 3.14; // Identificador de constante

    cout <<"Ingrese la medida del radio: ";
    cin >> radio;

    area = PI * radio * radio;

    cout <<"El area del circulo es: "<<area << endl; //endl es para dejar espacio en linea 

    return 0;

}