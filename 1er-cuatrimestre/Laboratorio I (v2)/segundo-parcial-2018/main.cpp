#include <iostream>
using namespace std;
#include "src/generic.h"

int main() {
    ST_VENTA ventas[CANTMESES][CANTDIAS]; // Día AAAAMMDD (int), id producto vendido (int), unidades vendidas (int).
    ST_PRODUCTO productos[CANTPRODUCTOS]; // id producto (int), nombre producto (string), precio (double).
    // Se pide imprimir por pantalla el nombre del producto menos vendido y el mes de mayor facturación. Sin búsquedas secuenciales en el vector de productos plis.
    // Se vende un producto por venta. Ejemplo, podrían venderse 4 tomates, pero no 2 tomates y 2 pepinos.
    int ventasPorProducto[CANTPRODUCTOS] = {0};
    int facturacionPorMes[CANTMESES] = {0};
}