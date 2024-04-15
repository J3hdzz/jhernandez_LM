#include <iostream>

using namespace std;

int main() {
    int numeroEstudiantes;
    double sumaCalificaciones = 0;
    double promedio;
    string nombreEstudiante;
    double calificacionEstudiante;
    int i;

    cout << "Ingrese la cantidad total de estudiantes en el grupo (no mayor a 10): ";
    cin >> numeroEstudiantes;

    for (i = 1; i <= numeroEstudiantes; i = i + 1) {
        cout << "Estudiante #" << i << ":" << endl;
        cout << "Ingrese el nombre del estudiante: ";
        cin >> nombreEstudiante;
        cout << "Ingrese la puntuación de " << nombreEstudiante << ": ";
        cin >> calificacionEstudiante;

        sumaCalificaciones += calificacionEstudiante;
    }

    promedio = sumaCalificaciones / numeroEstudiantes;

    cout << "El promedio general de las calificaciones del grupo es: " << promedio << endl;

    return 0;
}
