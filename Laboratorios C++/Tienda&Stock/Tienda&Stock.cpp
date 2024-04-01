#include <iostream>
using namespace std;

int main(){

    int tiendaAbierta, productoEnStock;

    cout << "La tienda está abierta?(Ingrese 1 para sí, 0 para no): ";
    cin >> tiendaAbierta;

    cout << "El producto que usted busca está en stock?(1 para sí, 0 para no): ";
    cin >> productoEnStock;

    if(tiendaAbierta == 1 && productoEnStock == 1){
        cout << "Puede ir a la tienda y comprar el producto." <<endl;
    }
    else{
        cout << "No puede ir a comprar el producto." <<endl;
    }
    return 0;
}