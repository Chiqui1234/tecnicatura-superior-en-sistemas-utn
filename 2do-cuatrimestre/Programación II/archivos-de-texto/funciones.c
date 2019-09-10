#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "funciones.h"

FILE *open(const char *file, const char *mode)
{
	FILE *pFile = fopen(file, mode);
	if( (pFile = fopen(file, mode)) == NULL)
		exit(EXIT_FAILURE);
	return pFile;
}

void myFwrite(char reading[], FILE *io_input1, FILE *io_output, char *materia)
{
	ST_ALUMNO alumno;
	fgets(reading, CANT, io_input1); // Leo
	fprintf(io_output, "\n\nMATERIA\t%s\n", materia); // Imprimo el nombre de materia
	while( !feof(io_input1) ) // Lectura. feof() parará en el final del archivo
	{
		alumno = parcear(reading);
//		if(alumno.promedio >= 6){
		fprintf(io_output, "NOMBRE: %s\tLEGAJO: %s\tPROMEDIO: %.2f\n", alumno.nombre, alumno.legajo, alumno.promedio);
		fgets(reading, CANT, io_input1);
//		}
	}
}

ST_ALUMNO parcear(char a[CANT])
{
	ST_ALUMNO alumno;
	char *token = strtok(a, ","); // nombre
	memset(alumno.nombre, '\0', 20);
	memset(alumno.legajo, '\0', 10);	
	alumno.promedio = 0;
	strncpy(alumno.nombre, token, 20);
	token = strtok(NULL, ","); // legajo
	strncpy(alumno.legajo, token, 10);
	// nota 1
	float nota1 = atof( strtok(NULL, ",") ); // nota 1
	float nota2 = atof( strtok(NULL, ",") ); // nota 2
	float nota3 = atof( strtok(NULL, ",") ); // nota 3
	alumno.promedio = (nota1 + nota2 + nota3) / 3;
	return alumno;
}
