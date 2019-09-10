/*
  Contar la cantidad de letras de un char[] y devolverlo. Usar sintáxis de punteros
*/
#include <stdio.h>

int contarPalabras(char *cadena)
{
  int cant = 0;
  char *puntero = cadena;
  while( *puntero != '\0' )
  {
    if( *puntero != ' ' )
    {
      cant++;
    }
    *puntero++;
  }
  return cant;
}

int main()
{
  char palabra[100] = "Argentina, un país con buena gente.";
  printf("Hay %d letras.\n", contarPalabras(palabra));
}
