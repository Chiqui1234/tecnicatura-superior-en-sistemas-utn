#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "header.h"

FILE * Open (const char * nombre, const char * modo)
{
    FILE * f = NULL;
    f = fopen(nombre, modo);
    if (f == NULL)
    {
        exit(EXIT_FAILURE);
        
    }
    return f;
}


void solicitarDatos(ST_INVITADO  invitado[3], int cant, FILE * archivo)
{
    for (int i = 0; i < cant; i++)
    {
        printf("Ingrese nombre \n");
        scanf("%s", invitado[i].nombre);
        printf("Ingrese dni \n");
        scanf("%d", &invitado[i].dni);
    }
}

void guardarArchivo(ST_INVITADO invitado[3], int cant, FILE * archivo)
{
    for (int i = 0; i < cant; i++)
    {
        fwrite(&invitado[i], sizeof(ST_INVITADO), 1, archivo);
    }    
    
}

void imprimirDatos( FILE * archivo)
{
    ST_INVITADO  invitado;
   fseek(archivo, 0, SEEK_SET);
   fread(&invitado, sizeof(ST_INVITADO), 1, archivo);
    while (!feof (archivo))
    {
        printf("Nombre: %s\n", invitado.nombre);
        printf("Dni: %d\n", invitado.dni);
        fread(&invitado, sizeof(ST_INVITADO), 1, archivo);     
    }      
    
}

