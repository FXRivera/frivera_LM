#include <iostream>
using namespace std;

int main()
{
    double base, altura, area;

    cout << "Ingrese la medida de la base: ";
    cin >> base;

    cout << "Ingrese la medida de la altura: ";
    cin >> altura;

    area = base * altura;

    cout << "El área del cuadrado es "<< area <<endl;

    return 0;
}