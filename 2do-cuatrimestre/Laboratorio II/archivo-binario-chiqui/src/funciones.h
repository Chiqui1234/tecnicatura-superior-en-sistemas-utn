#include <stdio.h>
#include <stdlib.h>
#include "colors.h"

typedef struct
{
    char nombre[20];
    unsigned int dni;
} ST_INVITADO;

typedef enum 
{
    FALSE=0,
    TRUE
} BOOL;

FILE *open(const char *namefile, const char *mode);
BOOL preLoad(ST_INVITADO *invitado, int *i);
void save(FILE *stream, ST_INVITADO invitado, BOOL status);
void print(FILE *stream, int i);