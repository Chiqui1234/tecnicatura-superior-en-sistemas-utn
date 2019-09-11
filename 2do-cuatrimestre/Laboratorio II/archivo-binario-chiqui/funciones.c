#include "src/funciones.h"

/**
 * @param ST_INVITADO *invitado recibe la variable desde el main para su edición
 * @return FALSE si el dni es igual cero, para cortar el bucle
 */
FILE *open(const char *namefile, const char *mode)
{
    FILE *stream = NULL;
    if( (stream = fopen(namefile, mode)) == NULL )
    {
        printf("Error, imposible abrir el archivo %s.\n", namefile);
        exit(EXIT_FAILURE);
    }
    return stream;
}

/**
 * @param ST_INVITADO *invitado recibe la variable desde el main para su edición
 * @return FALSE si el dni es igual cero, para cortar el bucle
 */
BOOL preLoad(ST_INVITADO *invitado, int *i)
{
    printf("\nDNI (sólo números): ");
    scanf("%d", &invitado->dni);
    
    if(invitado->dni == 0)  // ¿Habrá una mejor forma de cortar el bucle?
        return FALSE;       // Devolver falso corta el bucle que pide los datos al usuario

    printf("Nombre: ");
    scanf("%s", invitado->nombre);
    *i = *i + 1;
}

/**
 * @param FILE *stream recibe el archivo dónde se va a guardar la información
 * @param ST_INVITADO invitado recibe la información (previamente ingresada por el user)
 */
void save(FILE *stream, ST_INVITADO invitado, BOOL status)
{
    if( status == FALSE )   // ¿Habrá una mejor forma de cortar el bucle?
        return;

    int blocks = 1;
    printf("Se guardó el invitado \"%s\"... \n", invitado.nombre);
    if( (fwrite(&invitado, sizeof(ST_INVITADO), blocks, stream)) != blocks ) // Imprime un error si no se efectuó el fwrite correctamente
    {
        c_boldRed();        // Pinta las letras siguientes de color rojo
        printf("Explotó todo :O\nNo pude guardar los bloques de información requeridos.\n");
        c_reset();          // Resetea el color por default (a veces c:)
        exit(EXIT_FAILURE);
    }
}

/**
 * @param FILE *stream recibe el archivo, para leerlo, almacenarlo en la variable ST_INVITADO test y luego imprimir por pantalla.
 */
void print(FILE *stream, int i)
{
    ST_INVITADO *test = (ST_INVITADO*) malloc(sizeof(ST_INVITADO));
    int j = 0;              // un contador
    
    c_boldCyan();           // Setea el color de las letras a color cyan (negrita)
    printf("\nIMPRESIÓN (%d):\n", i);
    
    fseek(stream, 0, SEEK_SET);             // Me posiciono al principio del archivo
    fread(test, sizeof(ST_INVITADO), 1, stream);
    while ( !feof(stream) /*&& j < i*/ )    // Comento esta parte porque la "i" depende de si el usuario ingresó info, algo imposible porque comenté esa parte en el main()
    {
        printf("Persona Nro. %d: %s\n", j, test->nombre);
        printf("DNI Nro. %d: \t%d\n\n", j, test->dni);
        fread(test, sizeof(ST_INVITADO), 1, stream);
        j++; 
    }
}