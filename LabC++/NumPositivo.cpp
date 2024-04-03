#include <iostream>

using namespace std;

int main()
{
int num;
cout << "Introduce un numero positivo: "; //Entrada de datos
cin >> num;

if(num > 0) //Proceso para identificar si el numero es positivo
{
    cout << "El numero es positivo." << endl;
}

else //Mensaje si el numero no es positivo
{
    cout << "El numero no es positivo.";
}


return 0;
}