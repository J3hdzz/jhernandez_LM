#include <iostream>

using namespace std;

double Sumar(int a, double b){
    return a + b; 
}

int main(){
    double num1,num2;
 

    cout << "Ingrese el primer numero a sumar: ";
    cin >> num1;

    cout << "Ingrese el segundo numero a sumar:";
    cin >> num2;

    double resultado = Sumar(num1,num2);

    cout << resultado;

    return 0;
}
