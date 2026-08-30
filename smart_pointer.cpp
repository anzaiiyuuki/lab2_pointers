/*
#include <iostream>
using namespace std;

int main() 
{
    int *edad = new int;
    *edad = 21;
    cout << "Edad: " << *edad << endl;
    delete edad;
    return 0;
}

*/

#include <iostream>
#include <memory>
using namespace std;


unique_ptr<int> triplicar(int valor) 
{
    unique_ptr<int> resultado(new int); // como usar unique pointes en una funcion.
    *resultado = valor * 3; // lo mismo que el bug_returning.cpp pero con unique pointer.
    return resultado; //error, esta usandola memoria de la direccion en vez de devolver su valor.! Antes&resultado, ahora-> resultado
}

int main() 
{
    unique_ptr<int> ptr = triplicar(10);
    cout << "Edad: " << *ptr << endl;
    // los unique pointers no necesitan delete pq ya lo hacen.

    // a mi entender y lo que he observado, pienso que unique pointer es un pointer mejor pq no necesita delet. esto va de la mano pq no necesitarias borrar maunualmente la memoria.
    // en resumen, unique es mejor para los arreglos pq no tendrias que borrar manualmente la memoria que uses en la parte 5
    
    return 0;
}