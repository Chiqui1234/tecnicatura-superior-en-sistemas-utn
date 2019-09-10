#include <iostream>
using namespace std;
#include "src/general.h"

void completadorDeMatrices(ST_VIAJE viajes[MESES][DIAS], int meses, int dias)
{
    int contador = 100, contadorDias = 0;
    for(int i = 0;i < meses-1;i++)
    {
        for(int j = 0;j < dias-1;j++)
        {
            viajes[i][j].idChofer = contador;
            viajes[i][j].salida = "salida_nro_"+to_string((j+1)/(i+1));
            viajes[i][j].llegada = "llegada_nro_"+to_string(i*j);
            viajes[i][j].fecha = 20190000+(i*100)+j;
            viajes[i][j].diaSemana = contadorDias;
            viajes[i][j].km = rand() % 10000;
            viajes[i][j].puntajeOtorgado = rand() % 10 + 1;
            contador++;
            contadorDias++;
            if(contador > 199)
                contador = 100;
            if(contadorDias > 6)
                contadorDias = 0;
            
            //cout << "ID Chofer: " << viajes[i][j].idChofer << endl << "Salida: " << viajes[i][j].salida << endl << "Llegada: " << viajes[i][j].llegada << endl << "Fecha: " << viajes[i][j].fecha << endl << "Dia de la semana: " << viajes[i][j].diaSemana << endl << "Km recorridos: " << viajes[i][j].km << endl << "Puntaje otorgado: " << viajes[i][j].puntajeOtorgado << endl << endl;
        }
    }
}

void completadorDeVergas(ST_CHOFER choferes[], int n)
{
    // Estuve 20 minutos viendo porqué no me imprimía el mejor chofer del domingo y era porque no hice una función para rellenar datos de entrada. No he nombrado a la función 'completadorDeVergas' en vano c:
    for(int i = 0;i < n;i++)
    {
        choferes[i].id = i+100;
        choferes[i].nombre = "Chofer";
        choferes[i].apellido = "Chevallier "+to_string(i+100);
        choferes[i].dni = 40000000 + i*33;
        choferes[i].categoria = 1; // Siempre son categoría nro 1
    }
}

double calcPuntaje(double kmRecorrido, short int puntajeOtorgado, short int categoria) // (kmRecorrido * puntajeOtorgado) / categoria
{
    return (kmRecorrido*puntajeOtorgado)/categoria;
}

int obtenerPosicionChofer(int a)
{
    return a-100;
}

void ordenarChoferesPorPuntos(ST_RESUMEN a[], int n)
{
    ST_RESUMEN aux;
    for(int i = 0;i < CANTCHOFERES-1;i++) // Recuerden agregar '-1', porque CANTCHOFERES vale 100 pero las posiciones del vector van de 0 a 99 inclusive
    {
        for(int j = 0;j < CANTCHOFERES-i-1;j++) // '-i' porque se supone que en cada iteración un número queda ordenado. Ahorra ciclos
        {
            if( a[j].puntajeAcumulado < a[j+1].puntajeAcumulado ) // Los ordeno de manera descendente (el más grande primero)
            {
                aux = a[j+1];
                a[j+1] = a[j];
                a[j] = aux;
            }
        }
    }
}

int determinarMejorDominguero(double puntajesDomingo[], int n)
{
    int record = puntajesDomingo[0];
    int posRecord = 0;// Nótese que puntajesDomingo ya tiene los datos guardados por posición, no ID del chofer (que va de 100 a 200)
    for(int i = 1;i < n;i++)
    {
        if(puntajesDomingo[i] > record)
        {
            posRecord = i;
            record = puntajesDomingo[i];
        }
    }
    return posRecord;
}