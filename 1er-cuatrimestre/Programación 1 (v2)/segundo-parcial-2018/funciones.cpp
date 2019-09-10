#include <iostream>
#include "src/funciones.h"
using namespace std;

bool busqueda(int key, int vecB[], int n, int offset)
{
    for(int j = offset;j < n;j++)
    {
        cout << "Buscando el número " << key << ", intento " << j-offset+1 << endl;
        if(key == vecB[j]){
            cout << "key encontrada." << endl << endl;
            return true; 
        }
    }
    cout << "key no encontrada." << endl << endl;
    return false;
}

void apareoDeVectores(int vecA[], int vecB[], int vecFinal[])
{   
    int j = 0;
    for(int i = 0;i < N;i++)
    {
        if( busqueda(vecA[i], vecB, M, i) )
        {
            vecFinal[j] = vecA[i];
            j++;
        }
    }
}

void cargarMaterias(string materias[], int n)
{

}

void cargarAlumno(alumnos listaAlumnos[], int m)
{

}

void cargarNotas(alumnos listaAlumnos[], string materias[], int m, int n)
{

}