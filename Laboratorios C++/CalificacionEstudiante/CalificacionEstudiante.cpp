#include <iostream>
using namespace std;

main(){
    //clasificando variables
    int sumaCalificaciones = 0;
    int promedio, calificacionEstudiante;
    string nombreEstudiante;

    //cuenta los 10 estudiantes y sus calificaciones
    for(int i = 1; i <= 10; i++){

        //le pide al usuario el nombre del estudiante
        cout << "Estudiante #" << i << ": ";
        cout << "Ingrese el nombre del estudiante: ";
        cin >> nombreEstudiante;

        //le pide al usuario la puntuación del mismo estudiante
        cout << "Ingrese la puntuación de " << nombreEstudiante << ": ";
        cin >> calificacionEstudiante;

        //se acumulan las calificaciones
        sumaCalificaciones = sumaCalificaciones + calificacionEstudiante;
    }
    //el total de las calificaciones se divide por la cantidad de estudiantes
    promedio = sumaCalificaciones/10;
    cout << "El promedio de las calificaciones del grupo son "<<promedio;
    
    return 0;
}