#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double cateto1, cateto2, hipotenusa;

    cout <<"Ingresar la medida del primer cateto: ";
    cin >> cateto1;

    cout <<"Ingresar la medida del segundo cateto: ";
    cin >> cateto2;
    
    cateto1 = pow(cateto1, 2);
    cateto2 = pow(cateto2, 2);

    hipotenusa = sqrt(cateto1 + cateto2);

    cout <<"La hipotenusa del triángulo es "<< hipotenusa <<endl;

    return 0;
}