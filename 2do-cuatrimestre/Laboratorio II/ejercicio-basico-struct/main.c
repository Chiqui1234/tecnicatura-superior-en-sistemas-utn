#include <stdio.h>

typedef struct 
{
    char nombre[100];
    int edad;
} ST_PERSONA;

void ordenar(ST_PERSONA personas[], int n)
{
    bool cambios = true;
    ST_PERSONA aux;
    for(int i = 0;i < n-1 && cambios;i++)
    {
        cambios = false;
        for(int j = 0;j < n-i-1;j++)
        {
            if(personas[j].edad > personas[j+1].edad)
            {
                aux = personas[j+1];
                personas[j+1] = personas[j];
                personas[j] = aux;
                cambios = true;
            }
        }
    }
}

int main()
{
    const int n = 2;
    ST_PERSONA personas[n];
    for(int i = 0;i < n;i++)
    {
        printf("Nombre de la persona %i: ", i+1);
        scanf("%s", &personas[i].nombre);
        printf("Edad de la persona %i: ", i+1);
        scanf("%i", &personas[i].edad);
    }
    int i = 20;
    ordenar(personas, &i);
    printf("%i", i);
}