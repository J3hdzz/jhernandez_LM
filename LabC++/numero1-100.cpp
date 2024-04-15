#include <iostream>

using namespace std;

int main() {
    int n = 0;
    int suma = 0;

    while (n < 100){
        n = n + 1;
        suma = suma + n;
        }
        
    cout << "La suma de los números del 1 al 100 es: " << suma;
}