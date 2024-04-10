#include <iostream>
using namespace std;

int main(){
    string nombre;
    int i;

        cout << "Ingrese su nombre: ";
        cin >> nombre;

    for(i = 1; i <= 10; i++){
        cout <<"Hola "<< nombre <<"!"<<endl;
    }


    return 0;
}