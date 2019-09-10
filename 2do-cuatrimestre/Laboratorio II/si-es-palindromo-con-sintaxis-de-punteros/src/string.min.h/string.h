#include <stdio.h>
#define MAX_CANT_CARACTERES 256
#define MAX_CANT_PALINDROMOS 64
/**
 * @param const char a[] es la entrada, que no debería modificarse al entrar a la función.
 * @param char salida[] es el resultado de la función
 */
void reset(char vec[], const char key);
int contarPalabras(const char a[]);
int contarLetras(const char a[]);
int obtenerPalabra(const char a[], char salida[], int *comienzo);
void copiar(char a[], char *salida);