#include <iostream>
using namespace std;

int main(){
    int array[5] = {6,7,8,9,10};

    cout << "Elementos del arreglo: "<< endl;
    for (int i = 0; i < 5; i++)
    {
        cout << "Elemento " << i + 1 << ": " << array[i] << endl;
    }

    return 0;
}