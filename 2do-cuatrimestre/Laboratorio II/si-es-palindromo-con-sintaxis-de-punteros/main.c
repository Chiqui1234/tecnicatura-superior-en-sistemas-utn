#include <stdio.h>
#include <stdlib.h>
#include "src/palindromo.h/palindromo.h"
#include "src/string.min.h/string.h"

int main()
{
    char entrada[MAX_CANT_PALINDROMOS] = "ala martin neuquen ";
    char palabras[MAX_CANT_CARACTERES]; // Acá almaceno la palabra que estoy obteniendo con "obtenerPalabra()"
    char vecPalindromo[MAX_CANT_PALINDROMOS]; // En este vector voy a jugar con malloc para guardar las palabras palíndromas y luego imprimir por pantalla
    int cantPalabras = contarPalabras(entrada);
    int i = 0;
    while( *(entrada+i) )
    {
        int cantLetras = obtenerPalabra(entrada, palabras, &i);
        if( esPalindromo(palabras) )
        {
            if( vecPalindromo[i] = (char*) malloc(sizeof(char) * cantLetras+1) == NULL)
            {
                exit(EXIT_FAILURE);
            }
            else // tengo que copiar al vector dónde guardo los palíndromos
            {
                reset(vecPalindromo, '\0');
                for(int i = 0;i < cantLetras;i++)
                {
                    char *punteroDelVector = &vecPalindromo[i];
                    copiar(palabras, punteroDelVector);
                }
            }
            printf("%s", vecPalindromo[i]);
        }
           // 1er parcial Labo II: punteros y archivos
    }
    
}