#include "palindromo.h"
#include "../string.min.h/string.h"
bool esPalindromo(const char palabras[])
{
    /**
     * const char palabras[] recibe cualquier palabra y evalúa si es palíndroma
     */
    int inicio = 0;
    int fin = contarLetras(palabras)-1;
    //printf("Inicio: %d | Fin: %d\n", inicio, fin);
    while( *palabras && *(palabras+inicio) == *(palabras+fin) && inicio != fin ) // *(palabras+fin): se le suma fin porque menos por menos es mas. Así no funciona nada...
    {
        inicio++;
        fin--;
    }
    return inicio==fin?true:false;
}