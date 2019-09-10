#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define CANT 5
// El usuario ingresa datos en un vector de estructura. Al terminar el input se guarda dentro de un .txt, sobre-escribiendo lo que había antes en dicho .txt
typedef struct { // Estructura del ejercicio
    int id;
    char nombre[20];
    char apellido[20];
    int edad;
} ST_PERSONA;

void cargaDatos(ST_PERSONA personas[CANT], int n)
{
    int i = CANT-1;
    personas[i].id = 27;
    strcpy(personas[i].nombre, "Santiago");
    strcpy(personas[i].apellido, "Gimenez");
    personas[i].edad = 19;
    i--;

    personas[i].id = 13;
    strcpy(personas[i].nombre, "Cristian");
    strcpy(personas[i].apellido, "Gimenez");
    personas[i].edad = 45;
    i--;

    personas[i].id = 9;
    strcpy(personas[i].nombre, "Martín");
    strcpy(personas[i].apellido, "Gimenez");
    personas[i].edad = 9;
    i--;

    personas[i].id = 23;
    strcpy(personas[i].nombre, "Paula");
    strcpy(personas[i].apellido, "Minasian");
    personas[i].edad = 48;
    i--;

    personas[i].id = 33;
    strcpy(personas[i].nombre, "Jaik");
    strcpy(personas[i].apellido, "Minasian");
    personas[i].edad = 92;
    i--;
}

int main()
{
    ST_PERSONA personas[CANT];

    FILE *miArchivitoDeTexto;
    miArchivitoDeTexto = fopen("test.txt", "a+"); // Lo nuevo lo agrega al principio del archivo. Orden descendiente (del último entrado hasta el primer entrado)
    if(miArchivitoDeTexto == NULL)
        exit(1);

    cargaDatos(personas, CANT);
    for(int i = 0;i < CANT;i++)
    {
        fprintf(miArchivitoDeTexto, "Nro. ID: %d\n", personas[i].id); // Guardo el dato
        fprintf(miArchivitoDeTexto, "Nombre: %s\n", personas[i].nombre); // Guardo el dato
        fprintf(miArchivitoDeTexto, "Apellido: %s\n", personas[i].apellido); // Guardo el dato
        fprintf(miArchivitoDeTexto, "Edad: %d\n", personas[i].edad); // Guardo el dato
    }
    
    fclose(miArchivitoDeTexto);
}