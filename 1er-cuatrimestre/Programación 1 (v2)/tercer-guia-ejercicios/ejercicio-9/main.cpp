#include <iostream>
using namespace std;
#include "src/estructuras.h"
#include "src/funciones.h"

int main() {
    ST_VENTAS registradas[DIASMES]; // Las ventas registradas en los 30 días del mes
    ST_TELEFONOS enStock[MODELOSTEL]; // Los teléfonos que tiene la tienda en stock
    ST_PROMOTORES disponibles[CANTPROMOTORES]; // Los promotores de la tienda
    int masVendido[MODELOSTEL][CANTPROMOTORES]; // En esta matriz acumulo las ventas de teléfonos (en general) de cada promotor. Me sirve para, luego, determinar si algún teléfono NO fue vendido por 'x' promotor
    int masVendidoPorPromotor[CANTPROMOTORES]; // Vector dónde almaceno la posición del teléfono más vendido (de cada promotor)
    int masVendidoGlobalPos; // Posición del teléfono más vendido: se sumaron las ventas totales de cada teléfono para determinar esto ;)
    ordenar(registradas);
    calcularCobro(registradas, enStock, disponibles, masVendido); // Esta función determina lo que debería ganar cada promotor a fin de mes. También edita la matriz que me inventé yo, dónde básicamente armo "un resúmen" de las ventas que se hicieron de cada teléfono, clasificadas por promotor :D
    for(int i = 0;i < CANTPROMOTORES;i++) // Con este for controlo el vendedor que analiza la función, pero me acabo de dar cuenta que la función, en conjunto con este for(), está MAL PLANTEADO (va a darme el teléfono más vendido del último vendedor). LINEA 15 y 16 RE-HACER c:
        masVendidoGlobalPos = posTelefonoMasVendido(i, masVendido); // Acá le paso la matriz para que la función determine el teléfono más vendido y me pase la posición.
    
}