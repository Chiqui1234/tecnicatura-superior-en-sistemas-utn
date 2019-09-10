#include <stdio.h>

void fx(int *pepito) // El puntero lo asterisco nuevamente para tener el valor
{
  *pepito = *pepito + 1; // Sumo el valor del puntero 'pepito'
}

int main()
{
  int numeros[3] = {1, 2, 3}; // *numeros es igual que numeros[0], ya que la dirección de números[] apunta a la primer celda del vector. Por ende, *(numeros+1) es igual a numeros[1] y así sucesivamente
  int x = 10;
  int *aX = NULL; // 'aX' es un puntero INT. Es una buena práctica igualarla a NULL (o a la dirección de memoria de una variable)
  aX = &x; // El puntero INT tiene la dirección de memoria de la variable 'x'
  *aX = *aX + 1; // Al contenido de 'aX', le sumo uno. Si fuera 'aX' sin asterisco, estaría sumando uno a la dirección y NO SE EJECUTA MAAAS
  fx(aX); // En la línea de arriba valía 11, con esta función vale 12. LE PASO UN PUNTERO
  printf("Variable \"x\" vale %i, dirección %p\n", x, &x); // Valor de 'x' y su dirección de memoria
  printf("Puntero a \"x\" vale %i, dirección de ese puntero %p\n", *aX, &aX); // La dirección del puntero a 'x' es distinta de la dirección de memoria dónde se aloja 'x'
  //Ver punteros constantes y aconstantes (en el apunte)
  // Un puntero constante es el cuál se le puede cambiar el contenido pero no la dirección a la cuál apunta (cómo los vectores). Ejemplo: *numeros = &x está requete mal. Ejemplo: int *const numeros;
  // aconstantes = int *const numeros;

}
