#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "funciones.h"

int main()
{
	ST_ALUMNO alumno;

	// Nombres y permisos de archivos
	char *input = "programacion_1.txt";
	char *outputName = "output.txt";
	char *permissionRead = "r";
	char *permissionWrite = "w";

	// Línea que estoy capturando con fgets()
	char reading[CANT];

	// Aperturas de archivos
	FILE *io_input = open(input, permissionRead);
	FILE *io_output = open(outputName, permissionWrite);

	myFwrite(reading, io_input, io_output, input); // leo el primer archivo
	
	input = "programacion_2.txt"; // cambio el nombre de archivo
	io_input = open(input, permissionRead); // abro otro archivo
	myFwrite(reading, io_input, io_output, input); // escrito

	// Cierre de archivos
	fclose(io_input);
	fclose(io_output);
}

