/* dados 3 archivos de texto, generar un único archivo con la siguiente estructura:
    Materia: <nombre>
    Nombre: <nombre> (40 caracteres)   Legajo <legajo> (10 caracteres)     Nota: <nota>
    Los archivos de Programación 1, 2 y 3 son iguales a la estructura ya dada, sólo que tendrá
    3 notas de las cuáles se deben promediar. Cada nota se separa por una coma.
    */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "funciones.h"

FILE* Open(const char* archivo, const char* modo);
int main()
{       
    ST_ALUMNO alumno;
    alumno.notas = 10;
    char *output = "output.txt";
    FILE *pOutput = open(output, "w+");
    fscanf(pOutput, "Esto es una prueba de %d notas.\n", alumno.notas);
    fclose(pOutput);
    exit(EXIT_SUCCESS);
}