#include <iostream>
using namespace std;
#define N 5
#define M 7

struct alumnos {
    int legajo;
    string nombre;
    float nota[2];
};

bool busqueda(int key, int vecB[], int n, int offset);
void apareoDeVectores(int vecA[], int vecB[], int vecFinal[]);
void cargarMaterias(string materias[], int n);
void cargarAlumno(alumnos listaAlumnos[], int m);
void cargarNotas(alumnos listaAlumnos[], string materias[], int m, int n);