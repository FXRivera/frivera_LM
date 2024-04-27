#include <iostream>
using namespace std;

//definición de variable global
double sueldo = 0.15;

//definición de función
double Sueldo(double ventas);

int main(){

    //definición de variable local
    double ventas;

    //le pide al usuario que ingrese la cantidad de dinero que hizo en las ventas
    cout <<"Ingrese la cantidad de dinero que tuvo de sus ventas: $";
    cin >> ventas;

    //llamada a la función
    double sueldoTotal = Sueldo(ventas);

    //imprime el sueldo calculado por la función
    cout << "Su sueldo es: $"<<sueldoTotal<<endl;

    return 0;
}

//calcula el sueldo
double Sueldo(double ventas){
    return ventas * sueldo;
}