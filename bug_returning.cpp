#include <iostream>
using namespace std;

int* triplicar(int valor) 
{
    int *resultado = new int; //usar dereferencing para apuntar al valor y usar el valor de ahi
    *resultado = valor * 3;
    return resultado; //error, esta usandola memoria de la direccion en vez de devolver su valor.! Antes&resultado, ahora-> resultado
}
// esto causa qu el resultado no te aparesca y que tarde en cerrar su ciclo de inicio.cierra pq no encuentra nada.
int main() 
 {
    int *ptr = triplicar(5);
    cout << "Resultado: " << *ptr << endl;
    delete ptr; // para borrar el valor del pointer,, sino causa memory leak.
    ptr = nullptr;
    return 0;
}