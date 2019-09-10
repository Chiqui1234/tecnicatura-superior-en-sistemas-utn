#include <iostream>
#include "src/funciones.h"
using namespace std;

int main()
{
    /*  Punto 1 */
    int vecA[N] = {0,2,3,6,9}, vecB[M] = {1,2,3,5,6,8,9}; // Suponiendo que N=5;M=7
    int vecFinal[M]; // vecFinal tiene M espacios porque M es el número mayor
    apareoDeVectores(vecA, vecB, vecFinal);
    /**/
    
    /*  Punto 2 */
    int n, m;
    cout << "Ingrese la cantidad de materias del instituto: ";
    cin >> n;
    string materias[n] = {"nd"};
    cargarMaterias(materias, n);
    cout << "Ingrese cantidad de alumnos: ";
    cin >> m;
    alumnos listaAlumnos[m];
    cargarAlumno(listaAlumnos, m); // Acá sólo agrego el legajo y nombre
    cargarNotas(listaAlumnos, materias, m, n); // Acá edito 'nota[]' de cada alumno por cada materia (razón por la que paso n)
}