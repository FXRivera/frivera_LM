#include <iostream>
using namespace std;

int main(){
    //definición de variables
    string nombre;
    int i;

        //le pide al usuario que ingrese su nombre
        cout << "Ingrese su nombre: ";
        cin >> nombre;

    //la i se suma hasta 10
    for(i = 1; i <= 10; i++){
        //imprime el número de veces hasta donde sumó
        cout <<"Hola "<< nombre <<"!"<<endl;
    }
    return 0;
}