#define CANTESTACIONES 4
#define CANTUSUARIOS 4
#define CANTPRESTAMOS 12
typedef struct estaciones {
    int id;
    string nombre;
    int cantMax; // Limite de bicis
    int cantBicis; // Cantidad de bicicletas disponibles
} ST_ESTACIONES;

typedef struct usuarios {
    int dni;
    string nombre;
    string apellido;
} ST_USUARIOS;

typedef struct prestamos {
    int dni;
    int idRetiro;
    int idDevolucion;
    int tiempoDeUso; // En minutos
} ST_PRESTAMOS;

typedef struct ratio { // ratio de retiros/devoluciones
    int retiros = 0;
    int devoluciones = 0;
} ST_RATIO;
int buscar(ST_USUARIOS usuarios[], int b);
void rellenarVectoresDeManeraRicolina(ST_ESTACIONES estaciones[], ST_USUARIOS usuarios[], ST_PRESTAMOS prestamos[]);
void procesarPrestamos(ST_ESTACIONES estaciones[],ST_USUARIOS usuarios[],ST_PRESTAMOS prestamos[],ST_RATIO ratio[], int minutosInfractores[], int cantPrestamos, int cantEstaciones, int cantUsuarios);
void imprimirInfractores(ST_USUARIOS usuarios[], int minutosInfractores[], int cantUsuarios);
void imprimirEstacionesConMasRetiros(ST_ESTACIONES estaciones[], ST_RATIO ratio[], int cantEstaciones);