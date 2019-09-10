#include <iostream>
using namespace std;

int main()
{
    // En un torneo participan K equipos. Juegan todos contra todos. Por cada partido se sabe:
    // Nro de equipo y Código de resultado ('P' = Perdido;'E' = Empatado;'G' = Ganado)
    // Se arma un lote de datos con todos los resultados del torneo, agrupado por Nro. de equipo
    // Imprimir, por cada equipo, su número y el puntaje total que obtuvo (suma 3 si gana y 1 si empata)
    // Sin vectores! Sólo debemos informar dentro del bucle lo que digita el usuario, sin guardar nada en ningún vector
    char codigo;
    int k, j = 0, numeroEquipo; // K equipos :: J es contador
    cout << "¿Cuántos equipos hay en el torneo? ";
    cin >> k;
    int puntaje = 0;
    const int cantidadPartidosPorEquipo = k-1;
    
    for(int i = 0;i < k;i++) // Para el conteo de equipos
    {
        cout << "Número del equipo a ingresar puntajes: ";
        cin >> numeroEquipo;
        for(int j = 0;j < cantidadPartidosPorEquipo;j++) // Para los partidos de cada equipo
        {
            cout << "Partido Nro. " << j << " del equipo " << numeroEquipo << ". Puntaje (P, E, G): ";
            cin >> codigo;
            if(codigo == 'G')
            {
                puntaje += 3;
            }
            else if(codigo == 'E')
            {
                puntaje += 1;
            }
        }
        cout << "El puntaje total del equipo " << numeroEquipo << " es de " << puntaje << " puntos" << endl;
        puntaje=0;
    }
}