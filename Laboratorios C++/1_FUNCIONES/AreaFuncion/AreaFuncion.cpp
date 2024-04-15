#include <iostream>
using namespace std;

//definicion de la funcion ObtenerPi que no recibe parametros y retorna un valor double
double ObtenerPi()
{
    return 3.141592653589793;
}

int main()
{
    double radio = 5;
    //multiplica el radio por sí mismo para obtener el cuadrado del radio
    double area = ObtenerPi() * (radio * radio);

    cout << "El área es: "<<area<<endl;

    return 0;
}