#include <iostream>
using namespace std;

void swap(int *x, int *y) 
{
    int temp = *x;
    *x = *y;
    *y = temp;
}
void duplicar(int *valor)
{
    *valor = *valor * 2;
}
void ordenarPar(int *a, int *b)
{
    if (*a > *b)
    {
       int temp = *a;
       *a = *b;
        *b = temp; //ejercicio de clase, ordena valores. temp agarra el valor de a y depues a agarra b y depues b agarra el valor de a ( temp)
    }
}


int main() {
    int num1 = 2, num2 = -3;

    cout << "Antes: num1=" << num1 << " num2=" << num2 << endl;
    swap(&num1, &num2);
    cout << "Despues: num1=" << num1 << " num2=" << num2 << endl;

    cout<< "Probando la funcion duplicar: " << endl;
    int valor1 = 5;
    duplicar(&valor1);
    cout << "Despues de duplicar valor1(5): " << valor1 << endl;

    cout<< "Probando la funcion ordenarPar: " << endl;
    int num3 = 10, num4 = 5;
    cout << "Antes: num3=" << num3 << " num4=" << num4 << endl;
    ordenarPar(&num3, &num4);
    cout << "Despues: num3=" << num3 << " num4=" << num4 << endl;

    return 0;
}