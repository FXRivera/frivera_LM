#include <iostream>
using namespace std;

int main()
{
    double anoNacimiento, anoActual, edad;

    cout << "Ingrese el año en el cual nació: ";
    cin >> anoNacimiento;

    cout << "Ingrese el año actual: ";
    cin >> anoActual;

    edad = anoActual - anoNacimiento;

    cout << "Su edad es " << edad << "año(s)" << endl;

    return 0;
}