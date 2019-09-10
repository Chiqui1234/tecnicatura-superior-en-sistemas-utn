#define CANTBOCHAS 5
#include <iostream>
#include "src/generic.h"
using namespace std;

int main()
{
    int dulceDeLeche = CANTBOCHAS, americana = CANTBOCHAS, frutilla = CANTBOCHAS;
    int cantPedidos = 0;
    while( dulceDeLeche > 0 || americana > 0 || frutilla > 0 )
    {
        cargaDatos(dulceDeLeche, americana, frutilla, cantPedidos);
        mostrarDatos(dulceDeLeche, americana, frutilla, cantPedidos);
    }
    cout << "¡Te quedaste sin helado!" << endl;
    return 0;
}