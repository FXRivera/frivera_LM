#include <iostream>
using namespace std;

main(){
    
    //asignando valores a variables, 'suma' es conteo e 'i' es lo que se va a estar sumando y contando
    int suma = 0;
    int i;

    for(i = 1; i <= 10; i++){
        suma = suma + i;    //la 'i' se suma a 'suma' y se acumulan los números del 1 al 10
    }
    cout << "La suma de los números del 1 al 10 es: " << suma <<endl;   //total de los números sumados

    return 0;
}