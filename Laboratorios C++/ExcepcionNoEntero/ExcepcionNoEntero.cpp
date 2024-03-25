#include <iostream>
using namespace std;

int main()
{
    int numero;
    
    cout << "Ingrese el número: ";//ingresar número

    try
    {
        cin >> numero;
        if (cin.fail() || cin.peek() != '\n')
        {
            throw "Valor ingresado no es entero."; //mensaje que describe el problema
        }
        cout << "El número ingresado es entero." << endl;

    }
    catch (const char * mensaje)
    {
        cerr << "Excepción capturada: " <<mensaje << endl;
        return 1;
    }
    
    return 0;
}