#include <iostream>
#include "src/generic.h"
using namespace std;

void cargaDatos(int &dulceDeLeche, int &americana, int &frutilla, int &cantPedidos)
{
    int pedidoDl = 0, pedidoAmericana = 0, pedidoFrutilla = 0;
    cout << "¿Cuántas bochas de Dulce de leche? ";
    cin >> pedidoDl;
    if( comparar(dulceDeLeche, pedidoDl) ) // Estos triples if() hacen una modularización complicada y es medio cochino. Próximamente veremos como abordar esto
    {
        dulceDeLeche -= pedidoDl;
    }
    cout << "¿Cuántas bochas de Americana? ";
    cin >> pedidoAmericana;
    if( comparar(americana, pedidoAmericana) ) // Estos triples if() hacen una modularización complicada y es medio cochino. Próximamente veremos como abordar esto
    {
        americana -= pedidoAmericana;
    }
    cout << "¿Cuántas bochas de Frutilla? ";
    cin >> pedidoFrutilla;
    if( comparar(frutilla, pedidoFrutilla) ) // Estos triples if() hacen una modularización complicada y es medio cochino. Próximamente veremos como abordar esto
    {
        frutilla -= pedidoFrutilla;
    }
    cantPedidos++; // Esto no estaba en el diagrama. Es un acumulador de pedidos <3
}

bool comparar(int stock, int pedido)
{
    /* Con respecto al diagrama, agregué que devuelva true/false para 
     saber si hay que restar al gusto que pide el comprador del helado. Osea que si no hay stock 
     suficiente de ese sabor para entregar el helado, NO SE VA A RESTAR al stock... sino las variables
     que guardan la cantidad de bochas quedaría en negativo.
     Esto se nos pasó porque en la clase no pensamos mostrarDatos(). Si hubieramos pensado eso no se
     nos habría pasado, pero bueno, no había tiempo :P */
    if( stock >= pedido )
    {
        cout << "Se entregan " << pedido << " bochas de helado." << endl;
        return true;
    }
    else {
        cout << "No tenés " << pedido << " bochas en tu balde." << endl;
        return false;
    }
}