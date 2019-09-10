#include <iostream>
using namespace std;
#include "funciones.h"

int main()
{
    int cantCeros = 0;
    int cantPositivos = 0, totalPositivos = 0, promPositivos = 0;
    int sumaNegativos = 0;
    int numero, ultimoIngresado;
    forN(cantCeros, cantPositivos, totalPositivos, promPositivos, sumaNegativos, 2); // for() hasta 167
    cout << "Ingresá N: ";
    cin >> numero;
    ultimoIngresado = forN(cantCeros, cantPositivos, totalPositivos, promPositivos, sumaNegativos, numero); // for() hasta n
    whileDep(cantCeros, cantPositivos, totalPositivos, promPositivos, sumaNegativos, ultimoIngresado); // while() hasta n == ultimoIngresado
    cout << "Ingresá N: ";
    cin >> numero;
    forComplejo(cantCeros, cantPositivos, totalPositivos, promPositivos, sumaNegativos, numero, 4, 9999999); // for() hasta n || cantCeros < 4
    cout << "Ingresá N: ";
    cin >> numero;
    forComplejo(cantCeros, cantPositivos, totalPositivos, promPositivos, sumaNegativos, numero, 4, 6); // Si i < n || cantCeros < 4 || promPositivos < 6
    cout << "Cantidad de ceros: " << cantCeros << endl;
    cout << "Promedio positivos: " << promPositivos << endl;
    cout << "Suma negativos: " << sumaNegativos << endl;
    return 0;
}