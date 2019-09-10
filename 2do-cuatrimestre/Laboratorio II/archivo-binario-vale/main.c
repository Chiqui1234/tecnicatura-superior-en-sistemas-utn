#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "header.h"


int main()
{
    ST_INVITADO invitado[3];
    int cant=3;
    FILE * archivo = Open("archivoBinario.bin", "ab+");
    solicitarDatos(invitado, cant, archivo);
    guardarArchivo(invitado, cant, archivo);
    imprimirDatos(archivo);    

    fclose(archivo);

    return 0;
}
