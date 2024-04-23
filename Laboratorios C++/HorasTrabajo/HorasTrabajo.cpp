#include <iostream>
using namespace std;

int main(){

    //definición de variables
    int i;
    int sumaHorasTrabajadas = 0;
    int horasTrabajadas = 0;
    int overtime = 0;
    int sumaOvertime = 0;
    double pagoNeto, pagoNetoOvertime, pagoBruto, pagoBrutoOvertime;

    cout << "Pago por hora: $15"<<endl;

    //cuenta la cantidad de veces que hará la pregunta hasta su límite
    for(i = 1; i <= 3; i++){

        //pide la cantidad de horas de cada empleado
        cout << "Ingrese la cantidad de horas del empleado #"<< i<< ": ";
        cin >> horasTrabajadas;

        //si las horas sobrepasan de 40, se cuentan las horas demás
        if(horasTrabajadas > 40){

            overtime = horasTrabajadas - 40;
            sumaOvertime = sumaOvertime + overtime;

            horasTrabajadas = horasTrabajadas - sumaOvertime;
        }

        //acumula las horas de cada empleado
        sumaHorasTrabajadas = sumaHorasTrabajadas + horasTrabajadas;
    }

    //se añade el pago de las horas y luego se añade el descuento
    pagoBruto = sumaHorasTrabajadas * 15;
    pagoNeto = pagoBruto - (pagoBruto * 0.07);

    //se añade el pago de las horas overtime y luego se le añade el descuento
    pagoBrutoOvertime = sumaOvertime * (15 * 2);
    pagoNetoOvertime = pagoBrutoOvertime - (pagoBrutoOvertime * 0.07);

    //imprime el total pagado en nómina, el total pagado en overtime y el total de horas overtime
    cout << "Total pagado en nómina: $" <<pagoNeto<<endl;
    cout << "Total pagado en overtime: $"<<pagoNetoOvertime<<endl;
    cout<< "Total de horas overtime: "<<sumaOvertime<<endl;

    return 0;
}