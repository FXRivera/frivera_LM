#include <iostream>
#include <cmath> //librería que permite utilizar varias funciones matemáticas
using namespace std;

const double PI = 3.14; //definir variable global y constante

double calcularAreaCirculo(double radio); //definir función

int main(){
    double radio;

    cout << "Introduce el radio del círculo: ";
    cin >> radio;

    if(radio < 0){
        cout << "El radio ingresado no es válido. Por favor, introdice un valor de radio no negativo.";
    }

    else{
        double area = calcularAreaCirculo(radio); //llamada a la función

        cout << "El área del círculo con radio "<<radio<<" es: "<<area<<endl;
    }
    return 0;
}

double calcularAreaCirculo(double radio){
    return PI * pow(radio, 2); //calculando el area de circulo (pow funcion para elevar la potencia de un numero)
}