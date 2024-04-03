#include <iostream>
using namespace std;

int main()
{
    int tipoInstrumento;//definicion variable
    cout << "Elija un instrumento: "<<endl;//mostración
    cout << "INSTRUMENTOS "<<endl;
    cout << "1. Guitarras "<<endl;
    cout << "2. Pianos "<<endl;
    cout << "3. Baterías "<<endl;
    cout << "4. Violines "<<endl;
    cout << "5. Flautas "<<endl;
    cout << "       "<<endl;
    cout << "Se le dirá el descuento del instrumento elegido: ";
    cin >> tipoInstrumento;

    switch(tipoInstrumento)
    {
        case 1://guitarras
            cout << "El descuento es del 10%"<<endl;
            break;
        case 2://pianos
            cout << "El descuento es del 15%"<<endl;
            break;
        case 3://baterías
            cout << "El descuento es del 20%"<<endl;
            break;
        case 4://violines
            cout << "El descuento es del 12%"<<endl;
            break;
        case 5://flautas
            cout << "El descuento es del 8%"<<endl;
            break;
        default://selección inválida
            cout << "La selección ingresada no es válida. Intente otra vez."<<endl;
    }
    return 0;
}