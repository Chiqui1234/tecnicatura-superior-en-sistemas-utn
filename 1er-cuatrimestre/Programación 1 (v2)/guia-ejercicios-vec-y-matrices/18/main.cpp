#include <iostream>
using namespace std;
#define N 24
#include "funciones.h"

/*
    Ingresar N (menor a 25) y luego por filas una matriz cuadrada de 'N filas*N columnas'.
    Desarrollar un programa que determine e imprima:
    a) Todos los elementos de la diagonal principal o secundaria según de cuál resulte
    mayor, considerando que N fuera par.
    b) Los elementos del cuarto (N/2 filas y N/2 columnas) cuya sumatoria resulte mayor,
    considerando que N fuera par.
    c) Los elementos de la triangular superior o inferior dependiendo de cuál tenga mayor
    sumatoria de elementos.
*/

int main()
{
    int matriz[N][N]; // Creo la matriz con N*N espacios. N = 24 porque el ejercicio solicita que N sea menor a 25.
    int val; // 'val' se usa para determinar las filas y columnas.
    string mayorDiagonal, mayorCuarto; // Para indicarle al usuario cuál diagonal fue mayor (1 = diagonal principal :: 2 = diagonal secundaria)
    cargar(val); // El usuario carga 'n'.
    while(val > 25) // Si el usuario carga un número mayor a 25, se solicita uno menor (según lo pedido por el ejercicio)
    {
        cout << "El ejercicio solicita que 'n' valga menos que 25." << endl;
        cargar(val);
    }

    llenarMatriz(matriz, val);
    contarDiagonales(matriz, val, mayorDiagonal);
    contarCuartos(matriz, val, mayorCuarto);
    cout << "La diagonal mayor " << mayorDiagonal << endl;
    cout << "El cuarto mayor es " << mayorCuarto << endl;
}

// No hice el punto c porque no me acordaba que era la triangular superior e inferior (y en que dirección era :P)