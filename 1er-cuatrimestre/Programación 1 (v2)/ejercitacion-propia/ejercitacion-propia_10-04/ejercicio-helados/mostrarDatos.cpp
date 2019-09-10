#include <iostream>
#include "src/generic.h"
using namespace std;

void mostrarDatos(int dulceDeLeche, int americana, int frutilla, int cantPedidos) 
{
    /* Esta función no la pensamos en clase, por eso no está el diagrama.
     Simplemente le mostramos a "Pepe" la cantidad de bochas que le quedan. */
    cout << endl << ":: TU STOCK ::" << endl;
    cout << "Bochas de dulce de leche: " << dulceDeLeche << endl;
    cout << "Bochas de americana: " << americana << endl;
    cout << "Bochas de frutilla: " << frutilla << endl;
}