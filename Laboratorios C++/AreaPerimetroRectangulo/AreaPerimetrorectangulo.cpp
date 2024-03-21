#include <iostream>
using namespace std;

int main()
{
    double base, altura, area, perimetro;

    cout << "Ingrese la medida de la base: ";
    cin >> base;

    cout << "Ingrese la medida de la altura: ";
    cin >> altura;

    area = base * altura;

    perimetro = (base * 2) + (altura * 2);

    cout << "El área del cuadrado es "<< area <<endl;
    cout << "El perímetro del cuadrado es "<< perimetro <<endl;

    return 0;
}