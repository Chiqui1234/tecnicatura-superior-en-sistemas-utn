#include <stdio.h>
typedef struct
{
  int legajo;
  char nombre[20];
} ST_ALUMNO;

void cargaDatos(ST_ALUMNO *pST)
{
  pST -> legajo = 2; // El operador flecha se usa sólo para punteros de estructuras y desrreferencia al puntero creado al definir la función (ST_ALUMNO *pST)
  // *pST.legajo = 2; funciona, pero es más práctico con el operador FLECHA
}

void fx(int *x)
{
  *x += 1; // *x++ no funciona :O
}

int main()
{
  ST_ALUMNO alumno;
  int x = 9;
  printf("Valor original de X: %d\n", x);
  fx(&x); // Incremento en 1 el valor de X
  printf("Valor de X (nuevo): %d\n", x);
  cargaDatos(&alumno);
  printf("El legajo del alumno es: %d\n", alumno.legajo);
}
