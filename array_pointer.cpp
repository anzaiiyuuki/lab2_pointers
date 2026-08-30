#include <iostream>
using namespace std;

int main() {
    int vals[] = {4, 7, 11, 18, 25};

    cout << "Nombre del array (direccion): " << vals << endl;
    cout << "Primer elemento (*vals): " << *vals << endl;

    int *valptr = vals;   // valptr apunta al primer elemento

    cout << "\n--- Recorriendo con [] ---" << endl;
    for (int i = 0; i < 7; i++) {
        cout << valptr[i] << " ";
    }
    cout << endl;

    cout << "\n--- Recorriendo con aritmetica de punteros ---" << endl;
    for (int i = 0; i < 7; i++) {
        cout << *(valptr + i) << " ";
    }
    cout << endl;

    cout << "\n--- Usando ++ para avanzar el pointer ---" << endl;
    int *p = vals;
    for (int i = 0; i < 7; i++) {
        cout << *p << " ";
        p++;
    }
    cout << endl;

    cout<<"ultimo valor del arreglo: "<< *(vals+4) <<endl;
    int *inicio= vals;
    int *fin= vals+4;
    cout<<"elementos hay entre dos pointers: "<< (fin - inicio) <<endl;
    // resultado da 4, te dice la diferencia de posiciones entre los pointers, no los valores
    // si pones los limites a un limite que no tiene, te aparecen 0 pq no tiene valor designado.
    return 0;
}