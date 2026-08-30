#include <iostream>
using namespace std;

int main()
 {
    double precio = 19.99;

    // Dirección de memoria
    cout << "Direccion de precio: " << &precio << endl;
    cout<< "Precio: " << precio << endl;

    // Declarar y asignar un pointer
    double *ptr = nullptr;
    ptr = &precio;

    cout << "ptr apunta a: " << ptr << endl;
    cout << "Valor apuntado (*ptr): " << *ptr << endl;

    // Modificar el valor original a traves del pointer
   // *ptr = 100;
   // cout << "precio despues de *ptr = 100: " << precio << endl;

   //int *malptr=&precio; // no se supone que se supone que puedas poner un double y un int, pero aun asi lo deja
    //cout<<<"malptr apunta a: " << *malptr << endl;

   // int *sininicializar; pointer q apunta a lo random!
   // cout << "pointer sin inicializar: " << sininicializar << endl;
    return 0;
}