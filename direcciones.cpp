#include <iostream>
using namespace std;

int main()
 {
    double precio = 19.99;

    // Dirección de memoria
    cout << "Direccion de precio: " << &precio << endl;

    // Declarar y asignar un pointer
    double *pptr = nullptr;
    pptr = &precio;

    cout << "pptr apunta a: " << pptr << endl;
    cout << "Valor apuntado (*pptr): " << *pptr << endl;

    // Modificar el valor original a traves del pointer
    *pptr = 100;
    cout << "precio despues de *pptr = 100:" << precio << endl;

    return 0;    
}