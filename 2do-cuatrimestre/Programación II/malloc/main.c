#include <stdio.h>
#include <stdlib.h> // malloc
#include <string.h> // memset
#define NOMBRE 50
int main()
{
  char *nombre = NULL;
  printf("Nombre al principio: %p\n", nombre);
  nombre = (char*) malloc(sizeof(char) * NOMBRE+1);
  if(nombre != NULL)
  {
    printf("¡\"nombre\" tiene una dirección en memoria! %p\n", nombre);
    memset(nombre, '\0', NOMBRE+51); // Buscar memset()
  } else {
    printf("Superman es trolo.\n");
  }
}
