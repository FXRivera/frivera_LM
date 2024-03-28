#include <iostream>
using namespace std;

int main()
{
    double nota;
    cout << "Ingrese la nota del estudiante (0-20): ";
    cin >> nota;

    if(nota >= 11)
    {
        cout << "El estudiante aprobó la prueba." << endl;
    }

    else
    {
        cout << "El estudiante no aprobó la prueba." << endl;
    }
    return 0;
}