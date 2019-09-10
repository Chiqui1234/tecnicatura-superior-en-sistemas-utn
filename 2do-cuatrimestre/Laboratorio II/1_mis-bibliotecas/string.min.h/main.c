#include <stdio.h>
#include "src/string.min.h"
#define CANT_CHARS 50+1

int main()
{
    char source[CANT_CHARS] = "Argentina, un país con buena gente.";
    char destination[CANT_CHARS] = "";
    char test[100] = "Te voy a romper todo el código papá.";
    printf(":: PROGRAMA INICIADO ::\n\n");
    /* copy() demo */
    printf("Destino (debería estar vacío): %s\n", destination); // No debería imprimir nada, porque destination contiene '\0' únicamente
    copy(source, destination);
    printf("Destino (luego de copy()): %s\n", destination);
    /* compare() demo */
    if( compare(source, test) ) {
        printf("Ambas cadenas de caracteres son iguales.\n");
    }
    else
    {
        printf("\"%s\" y \"%s\" son cadenas distintas\n", source, destination);
    }
    
}