#include <iostream>
using namespace std;

int main()
{
    int opcion;
    cout << "Bienvenido a Johanna's Café: " <<endl;
    cout << "MENU"<<endl;
    cout << "1. Cafe "<<endl;
    cout << "2. Te "<<endl;
    cout << "3. Chocolate caliente "<<endl;
    cout << "4. Jugo de naranja "<<endl;
    cout << "-----------------------------------"<<endl;
    cout << "Por favor seleccione su bebida: ";
    cin >> opcion;

    switch(opcion)
    {
        case 1:     //Cafe
            cout << "El precio del Cafe es $2"<<endl;
            break;

        case 2:     //Te
            cout << "El precio del Te es $1.50"<<endl;
            break;

        case 3:     //Chocolate caliente
            cout << "El precio del Chocolate caliente es $2.50"<<endl;
            break;

        case 4:     //Jugo de naranja
            cout << "El precio del Jugo de naranja es $3"<<endl;
            break;
        
        default:    //En caso de que el usuario ingrese una opcion no valida
            cout << "Opcion NO valida. Por favor, selecciona una bebida del menu. "<<endl;
    }
    return 0;
}