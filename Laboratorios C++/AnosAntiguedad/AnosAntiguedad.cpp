#include <iostream>
using namespace std;

int main()
{
    int antiguedad;
    cout << "Ingrese la antiguedad del empleado (en años): ";
    cin >> antiguedad;

    if(antiguedad >= 5){
        cout << "Es elegible para el bono, recibirá $1000." <<endl;
    }

    else{
        cout << "El empleado no es elegible para el bono." <<endl;
    }
    return 0;
}