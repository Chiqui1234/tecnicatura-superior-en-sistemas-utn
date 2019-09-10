#include <iostream>
using namespace std;

/*
    Ingresar un valor entero N (menor a 40). A continuación ingresar un conjunto A y luego otro conjunto B, ambos de N elementos.
    Generar un arreglo C dónde cada elemento se forme de la siguiente forma:
    C[1] = A[1] + B[N], C[2] = A[2]+B[N-1]
*/

int cargarN(int &n)
{
    cout << "Ingresá N (menor a 40): ";
    cin >> n;
    return n;
}

void llenarVector(int vec[], int n) // Llenar de manera 'random' el vector
{
    for(int i = 0;i < n;i++)
    {
        vec[i] = rand() % 100 + 1;
    }
}

void generarVectorC(int vecA[], int vecB[], int vecC[], int n) // Generar vectorC a partir de las semillas vecA y vecB
{
    for(int i = 0;i < n;i++)
    {
        vecC[i] = vecA[i] + vecB[n - 1]; // Si el usuario pone n=30, sería vecA[i] + vecB[29]
    }
}

int main()
{
    int n;
    n = cargarN(n); // Cargo la N
    while(n > 40) // Si N es mayor a 40, lo pido de nuevo hasta que N sea menor a 40, cómo lo pide el ejercicio
    {
        n = cargarN(n);
    }
    int vecA[n] = {0}, vecB[n] = {0}, vecC[n] = {0}; // Creo las variables a la 'n' introducida
    llenarVector(vecA, n); // Lleno el vector A con valores random
    llenarVector(vecB, n); // Lleno el vector B con valores random
    generarVectorC(vecA, vecB, vecC, n); // Genero el vector C con el patrón que plantea el ejercicio

    //cout << "vecA[0] + vecB[n - 1]: " << vecA[0] + vecB[n - 1] << endl; Debug

    for(int i=0;i<n;i++) 
    {
        cout << "vecC: " << vecC[i] << endl; // Imprimo el vector generado
    }
    
}