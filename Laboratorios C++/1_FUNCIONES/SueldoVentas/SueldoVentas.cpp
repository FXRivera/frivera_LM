#include <iostream>
using namespace std;

//definición de función
double Ventas(double ventas){
    return ventas * 0.15;
}

//definición de función
double VentasBono(double ventas){
    return (ventas * 0.15) + 125;
}

int main(){

    //definición de variable
    double ventas;

    //le pide al usuario que ingrese la cantidad de dinero que hizo en las ventas
    cout <<"Ingrese la cantidad de dinero que tuvo de sus ventas: $";
    cin >> ventas;

    //si las ventas son igual o exceden $1500
    if(ventas >= 1500){

        //define la variable y llama la función de bono
        double sueldoTotal = VentasBono(ventas);

        //imprime el suedo total
        cout <<"Sueldo a pagar: $"<<sueldoTotal<<endl;
    }

    //si las ventas son menor que $1500
    else{
        //define la variable y llama la función sin bono
        double sueldoTotal = Ventas(ventas);

        //imprime el sueldo total
        cout <<"Sueldo a pagar: $"<<sueldoTotal<<endl;
    }
    
    return 0;
}