#define LECTURA 100

typedef struct
{
    char materia[15];
    char nombre[40];
    char legajo[10];
    int notas;
} ST_ALUMNO;

FILE* open(const char* file, const char* mode);