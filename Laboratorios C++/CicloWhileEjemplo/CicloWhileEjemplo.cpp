#include <iostream>
using namespace std;

int main(){
    int n = 0;
    int suma = 0;

    while(n < 100){
        n = n + 1;
        suma = suma + 1;
    }
    cout << "La suma de los numeros del 1-100 es "<<suma<<endl;

    return 0;
}