// Transformar "Hola mundo" a "Chau mundo" con sintáxis de punteros
// PD: AHORA FUNCIONA
#include <stdio.h>

void cambiar(char palabra[], char *const puntero)
{
  *(puntero+0) = 'C';
  *(puntero+1) = 'h';
  *(puntero+2) = 'a';
  *(puntero+3) = 'u';
}

int main()
{
  char palabra[20] = "Hola mundo"; // "Hola mundo"
  char *punteroDePalabra = palabra; // Creo un puntero a la dirección de memoria dónde se sitúa la primer posición del vector "palabra". No le pongo un '&' adelante porque si se escribe así estoy creando un puntero a todo el array
  cambiar(palabra, punteroDePalabra); // Transformar "Hola mundo" a "Chau mundo"
  printf(palabra); // Imprimo la palabra, luego de cambiar() -> Debería imprimir "Chau mundo"
}
