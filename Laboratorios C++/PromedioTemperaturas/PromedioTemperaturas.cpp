#include <iostream>
using namespace std;

int main(){
    
    //definicion de variables
    int i;
    double promedio, temp, sumaTemp;

    //cuenta las veces que se ejecutara el ciclo
    for(i = 1; i <= 12; i++){
        cout << "Temperatura "<< i <<endl;
        cout << "Ingrese la temperatura: "; //pide al usuario que ingrese las temperaturas
        cin >> temp; //se almacena el valor ingresado por el usuario

        sumaTemp = sumaTemp + temp;
    }
    promedio = sumaTemp/12;

    //imprime el promedio de las temperaturas
    cout << "El promedio de las temperaturas del año es: "<< promedio <<"º"<<endl;

    //cierra el programa
    return 0;
}