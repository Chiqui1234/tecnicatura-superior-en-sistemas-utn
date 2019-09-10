#include <stdio.h>
#define NOMBRE 20
#define EMAIL 50
#define TELEFONO 15

int main()
{
    char nombre[NOMBRE], email[EMAIL], telefono[TELEFONO];
    scanf("%s", nombre);
    scanf("%s", email);
    scanf("%s", telefono);
    FILE *archivito = fopen("data.txt", "w"); // se le agrega una "b" luego de la w para abrir el binario
    fwrite(cadena, 1, sizeof(cadena), archivito);
    fclose(archivito);
}