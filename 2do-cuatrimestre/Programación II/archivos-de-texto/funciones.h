#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define CANT_READ 3 // cantidad de archivos a leer
#define CANT 50

typedef struct 
{
	char nombre[20];
	char legajo[10];
	float promedio;
} ST_ALUMNO;

typedef struct
{
	char materia[CANT];
} ST_MATERIA;

FILE *open(const char *file, const char *mode);
ST_ALUMNO parcear(char a[CANT]);
void myFwrite(char reading[], FILE *io_input1, FILE *io_output, char *materia);
