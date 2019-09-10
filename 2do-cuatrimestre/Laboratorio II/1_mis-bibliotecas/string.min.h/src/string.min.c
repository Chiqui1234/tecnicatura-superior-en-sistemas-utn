#include <stdio.h>
#include "string.min.h"
/**
 * Author: Santiago Gimenez
 * GitHub: github.com/Chiqui1234
 * Repository: https://github.com/Chiqui1234/string.min.h
 * -------------------------------------------------------------------------------------------------------------------------------------
 * NOTA: Si quiero editar el contenido es vital no modificar la dirección de memoria (punteros constantes do the trick): char * const x
 * En caso de querer moverse por la posición de memoria pero no editar su contenido, un puntero aconstante cómo por ejemplo
 * const char *src funciona. Personalmente no me gusta mover las posiciones de memoria, así que es mejor siempre crear una variable que
 * adicione a la dirección de memoria, cómo hago por ejemplo en la función "copy".
 * -------------------------------------------------------------------------------------------------------------------------------------
 */ 

/**
 * @param char *src es un puntero a la posición desde dónde se desea comenzar a copiar
 * @param char *destination es un puntero a la posición dónde se desea pegar el contenido
 * @return devuelve los caracteres leídos, por si se quiere aumentar el puntero de destination
 */
int copy(const char *src, char * const destination) 
{
    int i = 0;
    while( *(src+i) )
    {
        *(destination+i) = *(src+i);
        i++;
    }
        
    *(destination+i+1) = '\0';

    return i; // Se terminó la copia
}

int lenght(const char *input1)
{
    int i = 0;
    while( *(input1 + i) )
        i++;

    return i;
}

BOOL compare(const char *input1, const char *input2) // Check. Always return false
{
    int i = 0, j = 0;

    i = lenght(input1); 

    while( *(input1 + j) == *(input2 + j) )
        j++;

    printf("i = %d, j = %d\n", i, j);
    return i == j; // Devuelve 1 (TRUE) si i == j
}