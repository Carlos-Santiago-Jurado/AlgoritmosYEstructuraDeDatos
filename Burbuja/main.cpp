#include <iostream>

using namespace std;
#define TAM 50
void ingresar(int a[], int n);
void ordenar(int a[], int n);
void imprimir(int a[], int n);
int main()
{
    int arreglo[5];
    ingresar(arreglo, 5);
    imprimir(arreglo, 5);
    ordenar(arreglo, 5);
    imprimir(arreglo, 5);

    return 0;
}
void ordenar(int a[], int n)
{
    for (int i = 0; i < 5; i++)
    {
        for (int j = i + 1; j < 5; j++)
        {
            if (a[j] < a[i])
            {
                int aux = a[i];
                a[i] = a[j];
                a[j] = aux;
            }
        }
    }
}
void imprimir(int a[], int n)
{
    cout << "El arreglo es: [";
    for (int i = 0; i < 5; i++)
    {
        cout << a[i] << " , ";
    }
    cout << "]" << endl;
}
void ingresar(int a[], int n)
{
    cout << "Ingresa los 5 elementos del arreglo: " << endl;
    for (int i = 0; i < 5; i++)
    {
        cout << "El elemento [" << i << "] es: ";
        cin >> a[i];
    }
}
