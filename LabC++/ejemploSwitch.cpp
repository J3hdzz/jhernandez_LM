#include <iostream>

using namespace std;

int main()
{
    int opcion;

    cout << "Bienvenidos a Johanna's Cafe:" <<endl;
    cout << "Menú" <<endl;
    cout << "1. Café" <<endl;
    cout << "2. Te" <<endl;
    cout << "3. Chocolate Caliente" <<endl;
    cout << "4. Jugo de Naranja" <<endl;
    cout <<"---------------------------" <<endl;
    cout << "Por favor, seleccione su bebida: ";
    cin >> opcion;
    
switch(opcion)
{
    case 1: //Café
        cout <<"El precio del café es 2$."<<endl;
        break;

    case 2: //Te
        cout << "El precio del Te es 1.50$" <<endl;
        break;

    case 3: //Chocolate 
        cout <<"El precio del chocolate caliente es 2.50$" <<endl;
        break;

    case 4: //Jugo de Naranja
        cout <<"EL precio del jugo de naranja es 3$" <<endl;
        break;

    default: //EEN caso de que el usuario ingrese una opción no válida.
    cout<<"Opcion NO válida. Por favor, ingrese una bebida del menú."<<endl;


}

return 0;
}