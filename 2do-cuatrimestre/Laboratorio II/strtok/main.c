#include <stdio.h>
#include <string.h>

// Revisar strcmp, strncat, strlenght, malloc, memcopy, memset
int main()
{
    // strtok(char *, const char *);
    char palabra[] = "Hola mundo";
    char sep[] = " ";
    char *token = NULL;
    token = strtok(palabra, sep); // Devuelve punteros
    printf("%s\n", token);
    while( token = strtok(NULL, sep) )
    {
        printf("%s\n", token);
        token = strtok(palabra, sep);
    }
}