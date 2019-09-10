#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "funciones.h"

FILE* open(const char* file, const char* mode)
{
    FILE *pArchivo = NULL;
    if( (pArchivo = fopen(file, mode)) == NULL)
    {
        exit( EXIT_FAILURE );
    }
   return pArchivo;
}