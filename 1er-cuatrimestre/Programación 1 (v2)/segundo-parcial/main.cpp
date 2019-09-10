#include <iostream>
using namespace std;
#include "src/general.h"

int main() {

    ST_ESTACIONES estaciones[CANTESTACIONES];
    ST_USUARIOS usuarios[CANTUSUARIOS];
    ST_PRESTAMOS prestamos[CANTPRESTAMOS];
    ST_RATIO ratio[CANTESTACIONES];
    int minutosInfractores[CANTUSUARIOS] = {0};

    rellenarVectoresDeManeraRicolina(estaciones, usuarios, prestamos);
    procesarPrestamos(estaciones,usuarios,prestamos,ratio,minutosInfractores, CANTPRESTAMOS,CANTESTACIONES,CANTUSUARIOS);
    imprimirInfractores(usuarios, minutosInfractores, CANTUSUARIOS);
    imprimirEstacionesConMasRetiros(estaciones, ratio, CANTESTACIONES);

}