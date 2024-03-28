#include <iostream>
using namespace std;

int main()
{
    float numero;//variable float
    int numero_entero;//variable entera
    
    cout << "Ingrese el número: ";//ingresar número
    cin >> numero;

    numero_entero = numero;

    try
    {
        if (numero != numero_entero)
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