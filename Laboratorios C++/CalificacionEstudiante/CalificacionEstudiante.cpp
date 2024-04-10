#include <iostream>
using namespace std;

int main(){
    //clasificando variables
    int sumaCalificaciones = 0;
    int numeroEstudiante, promedio, calificacionEstudiante;
    string nombreEstudiante;

    //le pide al usuario que ingrese la cantidad de estudiantes, mientras no sobrepase 10 estudiantes
    cout << "Ingrese la cantidad de estudiantes (no más de 10 estudiantes): ";
    cin >> numeroEstudiante;

    //verifica que el numero de estudiantes no sobrepase 10
    if(numeroEstudiante <= 10){
        //cuenta los estudiantes y sus calificaciones
        for(int i = 1; i <= numeroEstudiante; i++){

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
        promedio = sumaCalificaciones/numeroEstudiante;
        cout << "El promedio de las calificaciones del grupo son "<<promedio;
    }
    else{
        cout << "Número de estudiantes ingresado es muy grande o inválido."<<endl;
    }
    
    return 0;
}