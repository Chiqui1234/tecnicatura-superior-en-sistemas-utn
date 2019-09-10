#include <iostream>
using namespace std;
#define CANTCHOFERES 100
#define MESES 12
#define DIAS 31

typedef struct
{
    short int id; // Desde 100 a 200
    string nombre;
    string apellido;
    int dni;
    short int categoria;
} ST_CHOFER;

typedef struct
{
    int idChofer;
    string salida; // "orígen" en la fotocopia
    string llegada; // "destino" en la fotocopia
    int fecha; // DDMMAAAA
    short int diaSemana; // 0 es Domingo y 6 es Sábado
    double km; // Cantidad de kilómetros recorridos
    short int puntajeOtorgado;
} ST_VIAJE;

typedef struct 
{
    int idChofer;
    double puntajeAcumulado = 0;
} ST_RESUMEN;

void completadorDeMatrices(ST_VIAJE viajes[MESES][DIAS], int meses, int dias);
double calcPuntaje(double kmRecorrido, short int puntajeOtorgado, short int categoria);
int obtenerPosicionChofer(int a);
void ordenarChoferesPorPuntos(ST_RESUMEN a[], int n);
int determinarMejorDominguero(double puntajesDomingo[], int n);
void completadorDeVergas(ST_CHOFER choferes[], int n);