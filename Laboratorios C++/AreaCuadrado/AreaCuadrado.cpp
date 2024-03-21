#include <iostream>
using namespace std;

int main()
{
    double lado, area;

    cout << "Ingrese la medida de los lados: ";
    cin >> lado;

    area = lado * lado;

    cout << "El área del cuadrado es "<< area <<endl;

    return 0;
}