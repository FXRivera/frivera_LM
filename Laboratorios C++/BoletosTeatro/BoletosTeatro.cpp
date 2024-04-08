#include <iostream>
using namespace std;

int main(){

    int miembro, entradas;  //clasificación de variables
    cout << "Usted es miembro de nuestro teatro? (1 para sí, 0 para no): "; //pregunta al cliente si es miembro o no
    cin >> miembro;

    cout << "Cuántas entradas ha comprado?: ";  //pregunta al cliente la cantidad de entradas que compró
    cin >> entradas;

    //sí, es miembro
    if(miembro == 1){

        //sí, es miembro + compró más de 5 entradas
        if(entradas > 5){
            cout << "Recibirá un descuento de 15%." <<endl;
        }

        //sí es miembro, pero no compró más de 5 entradas
        else{
            cout << "Recibirá un descento de 10%." <<endl;
        }
    }

    //no es miembro, pero tiene más de 10 entradas
    if(miembro != 1){
        if(entradas > 10){
            cout << "Recibirá un descuento de 5%." <<endl;
        }

        //no es miembro y no compró más de 10 entradas
        else{
            cout << "No aplica para un descuento." <<endl;
        }
    }
    return 0;
}