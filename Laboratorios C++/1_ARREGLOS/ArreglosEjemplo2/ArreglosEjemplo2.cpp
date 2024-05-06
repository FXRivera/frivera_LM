#include <iostream>
using namespace std;

int main(){
    //definir el arreglo con 5 elementos y asginar valores directamente
    int array[5] = {6,7,8,9,10};

    //imprimir los elementos del arreglo
    cout << "Elementos del arreglo: "<<endl;

    for(int i = 0; i < 5; i++){
        cout << "Elemento "<< i + 1 <<": " << array[i]<<endl;
    }
    return 0;
}