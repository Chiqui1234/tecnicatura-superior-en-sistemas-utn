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

void cargar(int &val) // Pide un valor al usuario y "lo devuelve"
{
    cout << "Valor: ";
    cin >> val;
}

void llenarMatriz(int matriz[N][N], int n) // A pesar de que la matriz tiene un tamaño de 24*24, los bucles correrán hasta las filas y columnas especificadas por el usuario
{
    cout << " N1  | N2  " << endl;
    for(int i = 0;i < n;i++)
    {
        for(int j = 0;j < n;j++)
        {
            matriz[i][j] = rand() % 10;
            cout << matriz[i][j] << "  "; // Mientras relleno la matriz, la muestro y gg
        }
        cout << endl;
    }
    cout << " N3  | N4  " << endl; 
}

int contarDiagonales(int matriz[N][N], int n, string &mayorDiagonal) // Si 'n' es par, cuenta la diagonal principal y secundaria. Devuelve cuál diagonal fue la de mayores sumandos (por referencia), y devuelve el total de la diagonal mayor
{
    if(n % 2 == 0)
    {
        int i = 0, j = 0;
        int contador1 = 0, contador2 = 0;
        while(i < n && j < n) // Cuento la diagonal principal
        {
            contador1 += matriz[i][j];
            i++;
            j++;    
        }
        i = 0; // Sitúo el contador de filas en cero, para comenzar a leer la siguiente matriz de la forma [0][N]. De esta forma, tengo que sumarle a la i cómo antes, pero ahora restando la j ;D
        while(i < n && j < n) // Cuento la diagonal secundaria
        {
            contador2 += matriz[i][j];
            i++;
            j--;    
        }
        if(contador1 > contador2)
        {
            mayorDiagonal = "es la principal.";
            return contador1;
        } else if(contador2 > contador1)
        {
            mayorDiagonal = "es la secundaria.";
            return contador2;
        } else // Si contador1 == contador2
        {
            mayorDiagonal = "son ambas, ya que sus valores son idénticos."; // 0 será interpretado cómo "empate" por el programa
            return contador1;
        }
        
    }
    return -1; // -1 será interpretado cómo 'n' no es par
}

void contarCuartos(int matriz[N][N], int n, string &mayorCuarto)
{
    int sumaN1 = 0, sumaN2 = 0, sumaN3 = 0, sumaN4 = 0;
    int totalMax;
    int mid = n/2;
    for(int i = 0;i < mid;i++)
    {
        for(int j = 0;j < mid;j++)
        {
            sumaN1 += matriz[i][j];
            sumaN2 += matriz[i][j+mid];
            sumaN3 += matriz[i+mid][j];
            sumaN4 += matriz[i+mid][j+mid];
        }
    }
    // Ahora tengo que averiguar al cuarto mayor
    totalMax = sumaN1; // Igualo a sumaN1 así me ahorro una condición y simplifico las condiciones siguientes
    mayorCuarto = "N1.";
    if(sumaN2 > totalMax)
    {
        totalMax = sumaN2;
        mayorCuarto = "N2.";
    }
    if(sumaN3 > totalMax)
    {
        totalMax = sumaN3;
        mayorCuarto = "N3.";
    }
    if(sumaN4 > totalMax)
    {
        totalMax = sumaN4;
        mayorCuarto = "N4.";
    }
}