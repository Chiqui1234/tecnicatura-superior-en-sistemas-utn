#include "string.h"
void reset(char vec[], const char key)
{
    /**
     * char vec[] recibe una cadena de caracteres
     * const char key es el caracter que va a sustituir todas las celdas del primer parámetro
     */
    while(*vec && *vec != '\0')
    {
        *vec = key;
        vec++;
    }
}
int contarPalabras(const char a[])
{
    int contador = 0;
    while(*a && *a != '\0')
    {
        a++;
        if(*a == ' ')
            contador++;
    }
    return contador;
}
int contarLetras(const char a[])
{
    /**
     * @param const char a[]
     */ 
    int contador = 0;
    while(*a != ' ' && *a != '\0' && *a)
    {
        a++;
        contador++;
    }
    return contador;
}
int obtenerPalabra(const char a[], char salida[], int *comienzo)
{
    /**
     * @param const char a[] recibe un vector de chars
     * @param char salida[] almacena la palabra
     * @param int *comienzo es el punto de partida en la cuál la función comienza a leer
     */
    int i = 0;
    a = a+*comienzo; // Aplico el offset
    reset(salida, '\0'); // Reseteo "salida", porque quiero sobre-escribir
    while( *a != ' ' && *a != '\0' && *a )
    {
        *salida = *a; // vuelvo cada caracter de la palabra analizada a -> salida[]
        salida++;
        a++;
        i++; // esto me sirve para devolver un offset
    }
    *comienzo = i + *comienzo + 1; // +1 para omitir el espacio
    return i; // Devuelvo la cantidad de letras que tiene la palabra analizada
}
void copiar(char a[], char *salida)
{
    /**
     * @param const char a[] la entrada
     * @param char *salida el vector destino
     */
    int i = 0;
    while( *a != '\0' )
    {
        
        *(a+i) = *(salida+i);
        //printf("%s, %s\n", *a, *salida); // imprime NULL everywhere :(
        i++;
    }
}