#include <iostream>

using namespace std;

// int main(){
// int i;

// for (i =1 ; i <= 5; i++ ) //i++ / i = i + 1
// {
//     cout << i << endl;
// }

// }


int main(){
    int suma = 0; // Acomulador 
    int i; // variable de contador 

    for(i = 1; i <=10; i++){ // Ciclo que se repite
        suma = suma + i; // Acumulador que suma lo valores
    }

    
    cout << "La suma es: " << suma; // Salida 
}
