#include <iostream>
using namespace std;
#include "funciones.h"
void stats(int &cantCeros, int &cantPositivos, int &totalPositivos, int &promPositivos, int &sumaNegativos, int numero)
{
    if( numero == 0)
    {
        cantCeros++;
    }
    if( numero > 0 )
    {
        cantPositivos++;
        totalPositivos += numero;
        promPositivos = totalPositivos/cantPositivos;
    } else
    {
        sumaNegativos += numero;
    }
    
}
int forN(int &cantCeros, int &cantPositivos, int &totalPositivos, int &promPositivos, int &sumaNegativos, int n)
{
    int numero;
    for(int i=0;i < n;i++)
    {
        cout << "forN(); Ingresá el número " << i+1 << ": ";
        cin >> numero;
        stats(cantCeros, cantPositivos, totalPositivos, promPositivos, sumaNegativos, numero);
    }
    cout << "forN() terminado." << endl << endl;
    return numero;
}

void whileDep(int &cantCeros, int &cantPositivos, int &totalPositivos, int &promPositivos, int &sumaNegativos, int ultimoIngresado)
{
    int numero;
    cout << "Ingresá un número. El bucle seguirá hasta que digites el " << ultimoIngresado << ": ";
    cin >> numero;
    while(numero != ultimoIngresado)
    {
        cout << "Ingresá un número. El bucle seguirá hasta que digites el " << ultimoIngresado << ": ";
        cin >> numero;
        stats(cantCeros, cantPositivos, totalPositivos, promPositivos, sumaNegativos, numero);
    }
    cout << "whileDep() terminado." << endl << endl;
}
void forComplejo(int &cantCeros, int &cantPositivos, int &totalPositivos, int &promPositivos, int &sumaNegativos, int n, int cond2, int cond3)
{
    int numero;
    for(int i=0;i < n && cantCeros < cond2 && promPositivos < cond3;i++)
    {
        cout << "forComplejo(); Ingresá el número " << i+1 << ": ";
        cin >> numero;
        stats(cantCeros, cantPositivos, totalPositivos, promPositivos, sumaNegativos, numero);
    }
    cout << "forComplejo() terminado." << endl << endl;
}