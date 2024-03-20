#include <iostream>
using namespace std;

int main()
{
    //definicion de variables
    double area;
    double radio;
    const double PI = 3.14; //Identificador constante

    cout <<"Ingrese la medida del radio: "; //ingresar la medida del radio
    cin >> radio;

    area = PI * radio * radio;

    cout <<"El área del círculo es: "<<area <<endl;

    return 0;

}