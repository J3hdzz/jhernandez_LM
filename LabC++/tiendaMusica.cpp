#include <iostream>

using namespace std;

int main()
{
    int instrumento;

    cout << "Instrumentos:" <<endl;
    cout << "1. Guitarra" <<endl;
    cout << "2. Piano" <<endl;
    cout << "3. Batería" <<endl;
    cout << "4. Violín" <<endl;
    cout << "5. Flauta" <<endl;
    cout <<"---------------------------" <<endl;
    cout << "Por favor, seleccione el numero del instrumento desea comprar: ";
    cin >> instrumento;
    
switch(instrumento)
{
    case 1: //Guitarra
        cout <<"El descuento es de 10%."<<endl;
        break;

    case 2: //Piano
        cout << "El descuento es de 15%." <<endl;
        break;

    case 3: //Batería 
        cout <<"El descuento es de 20%." <<endl;
        break;

    case 4: //Violín
        cout <<"El descuento es de 12%." <<endl;
        break;

    case 5: //Flauta
        cout <<"El dscuento es de 8%." <<endl;
        break;

    default: //EN caso de que el usuario ingrese una opción no válida.
    cout<<"Opcion NO válida. Por favor, ingrese un instrumento del catálogo."<<endl;


}

return 0;
}