#include <iostream>
using namespace std;

int main(){
    string tarjeta;  //guardar la palabra

    cout << "Inserte su tarjeta de biblioteca y dé el estado de ella (activa/inactiva): "; //ingresar si la tarjeta está activa o no
    cin >> tarjeta;

    //verifica la palabra ingresada
    if(tarjeta == "activa"){
        cout << "El usuario puede hacer préstamos." <<endl;
    }

    else{
        cout << "El usuario no puede hacer préstamos." <<endl;
    }
    return 0;
}