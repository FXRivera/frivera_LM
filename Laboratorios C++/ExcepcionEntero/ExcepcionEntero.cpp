#include <iostream>
using namespace std;

int main()
{
    int numero;

    cout << "Ingrese el número: ";//ingresar número
    cin >> numero;

    try
    {
        if (numero == )
        {
            throw "Valor ingresado no es entero."; //mensaje que describe el problema
        }
        cout << "El número ingresado es entero." << endl;

    }
    catch (const char * mensaje)
    {
        cout << "Excepción capturada: " <<mensaje << endl;
    }
    return 0;
}