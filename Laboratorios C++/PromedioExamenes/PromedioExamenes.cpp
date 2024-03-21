#include <iostream>
using namespace std;

int main()
{
    double examen1, examen2, examen3, examen4, promedio;//define las variables

    cout << "Ingrese la puntuación del primer examen: ";
    cin >> examen1;

    cout << "Ingrese la puntuación del segundo examen: ";
    cin >> examen2;

    cout << "Ingrese la puntuación del tercer examen: ";
    cin >> examen3;

    cout << "Ingrese la puntuación del cuarto examen: ";
    cin >> examen4;

    promedio = (examen1 + examen2 + examen3 + examen4)/4; //se calcula el promedio de los exámenes

    cout <<"El promedio es "<< promedio <<endl;

    return 0;
}