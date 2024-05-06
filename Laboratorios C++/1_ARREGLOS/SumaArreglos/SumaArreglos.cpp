#include <iostream>
using namespace std;

int main(){
    
    //definición de variables
    int n;
    int suma = 0;

    //le pide al usuario que ingrese la cantidad de elementos que se van a sumar
    cout << "Ingrese la cantidad de variables que va a sumar: ";
    cin >> n;

    //verifica que el número ingresado no sobrepase de 100
    if(n <= 100){

        //repite el programa el número de veces del número ingresado
        for(int i = 0; i < n; i++){

            //definición de arreglo
            int array[i];

            //le pide al usuario que entre los valores que van a sumarse
            cout << "Ingrese el valor para sumar: ";
            cin >> array[i];

            //suma los valores ingresados
            suma = suma + array[i];
        }

        //imprime la suma total de los números
        cout << "La suma total de los números ingresados es: "<< suma<<endl;
    }

    //imprime un mensaje y termina el programa si el número ingresado sobrepasa de 100
    else{
        cout << "El número ingresado es muy grande.";
    }
    return 0;
}