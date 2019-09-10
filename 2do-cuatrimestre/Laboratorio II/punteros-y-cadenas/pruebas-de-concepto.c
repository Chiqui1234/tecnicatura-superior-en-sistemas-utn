#include <stdio.h>
#include "src/colors.h"
#include "src/pause.h"

// NOTA: falta comentar el código, posiblemente haga un video de esto y un resúmen de una carilla dónde básicamente en ítems aclare cómo se envían y reciben datos en C++
void punteroDeVariable()
{
  int variableConvencional = 5;
  int *puntero = &variableConvencional; // Al anteponer un '&', el lenguaje C nos trae la dirección de memoria de "variableConvencional", no su valor.
  printf("La posición de memoria \"%p\" tiene el valor %d\n", puntero, variableConvencional);
}

void punteroDePuntero()
{
  char variableArray[100] = "Argentina, un país con buena gente.";
  char *test = variableArray; // No es necesario anteponer el '&' a este array, ya que el array es una referencia en sí. En este caso, tenemos la dirección de memoria de la primer celda. Probé de hacer variableArray[11] (por ej) pero genera violación de segmento
  printf("\nSi bien el puntero \"test\" almacena la dirección de memoria de \"variableArray[]\", nótese que este puntero también debe ocupar un espacio en memoria para guardar la dirección del vector.\n");
  printf("El puntero \"test\" ocupa la dirección de memoria %p y contiene el valor de \"variableArray[]\": \"%s\". \nNótese que la dirección del array original es %p, mientras que el puntero tiene otra: %p. \n\n", test, &test[0], test, &test);
  /* Acá sucede algo muy curioso. Debido a que estábamos haciendo &test pero sobre un vector, debemos también indicarle a partir de qué celda se quiere mostrar el dato guardado. Si pusieramos &test[11], C imprimiría "un país con buena gente." */
}

int contarPalabras(char *cadena) // También podría ser char *const cadena
{
  printf("\nEste algoritmo cuenta las letras de una cadena hasta toparse con la \"\\\" \n");
  int cant = 0;
  char *puntero = cadena;
  while( *puntero != '\0' )
  {
    if( *puntero != ' ' ) // Si no detecto un espacio, sumo a la variable "cant"
    {
      cant++; // Contador de letras
    }
    *puntero++;
  }
  return cant;
}

void cambiarPalabra(char palabra[], char *const puntero)
{
  printf("\nEste algoritmo cambia letras de una palabra mediante sintáxis de punteros.\n");
  printf("Antes: %s\n", palabra);
  *(puntero+0) = 'C'; // Primer celda del vector
  *(puntero+1) = 'h';
  *(puntero+2) = 'a';
  *(puntero+3) = 'u'; // Cuarta celda del vector
  printf("Después: %s\n", palabra);
}

void menu(int *valor)
{
  int input = 0, dummie;
  c_boldGreen();
  printf("PRUEBAS DE CONCEPTO\n");
  c_green();
  printf("1. Puntero de variable convencional\n");
  printf("2. Puntero de puntero\n");
  printf("3. Navegación por un vector mediante un puntero -> void fx(char *cadena)\n");
  printf("4. Edición de un vector mediante un puntero -> void fx(char *const cadena)\n");
  printf("0. Salir\n");
  printf("Opción: ");
  scanf("%i.", &input);
  *valor = input;
}

int main()
{
    int valor = 0, *p_valor = &valor;
    char palabra[20] = "Hola mundo", *p_palabra = palabra; // Estas dos variables son para el punto 3 y 4
    menu(p_valor);
    while(valor != 0) // Correrá hasta que digitemos un cero, que es mi condición de corte
    {
      c_cyan();
      if(valor == 1)
        punteroDeVariable();
      else if(valor == 2)
        punteroDePuntero();
      else if(valor == 3)
        printf( "\"%s\" tiene %d letras.\n", palabra, contarPalabras(palabra) );
      else
        cambiarPalabra(palabra, p_palabra);

      c_boldRed(); // Para colorear "Presioná [Enter] para continuar"
      l_pause(); // Llamo la función de pausa
      menu(p_valor);
    } // Cierre while
    c_reset();
}
