#include <stdio.h>
#include <string.h>
#define CANT_CARACTERES 80

typedef struct
{
    char palabra[CANT_CARACTERES];
    int cantLetras;
} PALABRA;

int contarPalabras(char *frase)
{
    int i = 0;
    while( *frase && *frase != '\0' )
    {
        if( *frase != ' ' )
            i++;
    }
    return i;
}

int main()
{
    PALABRA record;
    PALABRA actual;
    char frase[CANT_CARACTERES] = "hola daian";
    char *pFrase = frase;
    //gets(frase);
    //int cantPalabras = contarPalabras(frase);
    int cantPalabras = 2;
    int i = 0;
    while(i < cantPalabras) // i hará ++ cuándo termine una palabra
    {
        if( *pFrase != ' ' ) // si estoy analizando la misma palabra
        {
            actual.palabra[i] = *pFrase;
            actual.cantLetras++;
        }
        else // cuándo detecto un espacio -> palabra nueva
        {
            if( actual.cantLetras > record.cantLetras ) // comparo
            {
                record.cantLetras = actual.cantLetras;
                strncpy(record.palabra, actual.palabra, CANT_CARACTERES);
            }
            actual.cantLetras = 0;
            memset(actual.palabra, '\0', CANT_CARACTERES);
            i++;
        }
        pFrase++;
        //i++;
    }
    printf("Palabra más grande: %s (%d)\n", record.palabra, record.cantLetras);
}