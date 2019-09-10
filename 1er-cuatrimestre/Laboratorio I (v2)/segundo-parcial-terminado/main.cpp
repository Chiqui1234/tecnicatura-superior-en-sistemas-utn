#include <iostream>
using namespace std;
#include "src/general.h"

int main()
{
    ST_CHOFER choferes[CANTCHOFERES];
    ST_VIAJE viajes[MESES][DIAS];
    ST_RESUMEN choferesPuntos[CANTCHOFERES]; // En este vector almaceno los puntajes de cada chofer. Luego debo ordenarlo
    double puntajesDomingo[CANTCHOFERES] = {0};

    completadorDeMatrices(viajes, MESES, DIAS); // Si, le paso las etiquetas #define como variables porque soy re heavy re jodido :P
    completadorDeVergas(choferes, CANTCHOFERES); 

    for(int i = 0;i < MESES-1;i++)
    {
        for(int j = 0;j < DIAS-1;j++)
        {
            int posChofer = obtenerPosicionChofer(viajes[i][j].idChofer);
            choferesPuntos[posChofer].idChofer = viajes[i][j].idChofer; // Acá quiero guardar el ID real, no la posición en el vector
            choferesPuntos[posChofer].puntajeAcumulado += viajes[i][j].puntajeOtorgado; // Acá sumo el puntaje otorgado al total de mi chofer
            if(viajes[i][j].diaSemana == 0)
            {
                puntajesDomingo[posChofer] += viajes[i][j].puntajeOtorgado;
            }
        }
    }

    ordenarChoferesPorPuntos(choferesPuntos, CANTCHOFERES);

    cout << ":: 10 MEJORES CHOFERES ::" << endl;
    for(int i = 0;i < 10;i++) // Muestro los 10 mejores choferes
        cout << "Chofer ID " << choferesPuntos[i].idChofer << " acumuló " << choferesPuntos[i].puntajeAcumulado << " puntos." << endl;

    int posChoferConMasPuntosDomingo = determinarMejorDominguero(puntajesDomingo, CANTCHOFERES);
    cout << "El chofer con más puntaje los días domingo es " << choferes[posChoferConMasPuntosDomingo].nombre << " " << choferes[posChoferConMasPuntosDomingo].apellido << " (ID " << choferes[posChoferConMasPuntosDomingo].id << ")." << endl; // Por ahora esto no imprime nada piola porque no hice la función que rellena los datos :(
}