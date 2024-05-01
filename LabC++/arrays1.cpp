#include <iostream>
#include <string>
using namespace std;

int main(){
    //Definir arreglo con 5 nombres 
    string ciudades[5] = {"Paris","Tokio","Nueva York","Londres","Sydney"};

    //Imprimir ciudades
    cout << "Lista de ciudades y paises: "<< endl;
    for (int i = 0; i < 5; i++)
    {
        cout << "Ciudad " << i + 1 << ": " << ciudades[i] << endl;
    }

    return 0;
}