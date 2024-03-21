#include <iostream>
using namespace std;

int main()
{
    double velocidad, tiempo, distancia;

    cout <<"Ingrese la velocidad promedio: ";
    cin >> velocidad;

    cout <<"Ingrese el tiempo del viaje: ";
    cin >> tiempo;

    distancia = velocidad * tiempo;

    cout <<"La distancia recorrida es " << distancia <<endl;

    return 0;
}