#include <iostream>
using namespace std;

int main()
{
  int tamano;
  cout << "Ingrese el cuantos estudiantes tienen la nota de los examenes: "<<endl;
  cin >> tamano;

    double *examen1 = new double[tamano];
    double *examen2 = new double[tamano];

  cout<<"Ingrese calificaciones del primer examen: "<<endl;
    for (int i = 0; i < tamano; i++) 
    {
    cout << "Nota " << i + 1 << ": ";
    cin >> examen1[i];
    }

    cout<<"Ingrese calificaciones del segundo examen: "<<endl;
    for (int i = 0; i < tamano; i++) 
    {
    cout << "Nota " << i + 1 << ": ";
    cin >> examen2[i];
    }

    cout << "\nNotas del Examen 1: "<< endl;
    for (int i = 0; i < tamano; i++)
    {
    cout << examen1[i] << " ";
    }
    cout << "\nNotas del Examen 2: "<< endl;
    for (int i = 0; i < tamano; i++)
    {
    cout << examen2[i] << " ";
    }

    // Liberar la memoria dinámica, si los pones en comentarios, nunca se va a liberar kla memoria
    delete[] examen1;
    delete[] examen2;
    examen1 = nullptr;
    examen2 = nullptr;
    return 0;
}
