#include <stdlib.h>
#include <string.h>

typedef struct 
{
    char nombre[20];
    int dni;    
}ST_INVITADO;

FILE * Open (const char * nombre, const char * modo);

void solicitarDatos(ST_INVITADO  invitado[3], int cant, FILE * archivo);
void guardarArchivo(ST_INVITADO invitado[3], int cant, FILE * archivo);
void imprimirDatos( FILE * archivo);
