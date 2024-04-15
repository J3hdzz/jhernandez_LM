#include <iostream>

using namespace std;

int main() {
    // Declaración de variables
    int cantidadEstudiantes;
    int promedio;
    string nombreEstudiante;
    int calificacionEstudiante;
    int i;
    int sumaCalificaciones = 0;

    cout << "Ingrese la cantidad de estudiantes (1-10): ";
    cin >> cantidadEstudiantes;

    if (cantidadEstudiantes > 10 || cantidadEstudiantes < 1){ // si no se cumple la condicion de (1-10)no se ejecuta el código
        cout << "Ingrese un número válido del 1 al 10";
    } else {
        for (i = 1; i <= cantidadEstudiantes; i = i + 1)//Ciclo a repetir
        {
            cout << "Estudiante " << i << ":" << endl;
            cout << "Ingrese el nombre del estudiante: ";
            cin >> nombreEstudiante;
            cout << "Ingrese la calificación de " << nombreEstudiante << ": ";
            cin >> calificacionEstudiante;

            sumaCalificaciones = sumaCalificaciones + calificacionEstudiante; // Suma acumulativa de las calificaciones
        }

        promedio = sumaCalificaciones / cantidadEstudiantes; // Procedimiento para Sacar el promedio

        cout << "El promedio del grupo es: " << promedio;
    }

    return 0;
}
