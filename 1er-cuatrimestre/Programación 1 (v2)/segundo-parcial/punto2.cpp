#include <iostream>
using namespace std;
#include "src/general.h"

void rellenarVectoresDeManeraRicolina(ST_ESTACIONES estaciones[], ST_USUARIOS usuarios[], ST_PRESTAMOS prestamos[]) {
    // En el ejercicio original había 80 estaciones, y el ID iba de 1 a 80. Teóricamente, el desarrollador "de la otra parte de la aplicación" tendría que haberse encargado de hacer un vector de 81 posiciones, y dejar estaciones[0] vacío.
    estaciones[1].id = 1;
    estaciones[1].nombre = "Pepito presenta ";
    estaciones[1].cantMax = 40;
    estaciones[1].cantBicis = 10;
    estaciones[2].id = 2;
    estaciones[2].nombre = "El rincón ";
    estaciones[2].cantMax = 40;
    estaciones[2].cantBicis = 20;
    estaciones[3].id = 3;
    estaciones[3].nombre = "de Chiqui ";
    estaciones[3].cantMax = 40;
    estaciones[3].cantBicis = 10;

    usuarios[0].dni = 42215991;
    usuarios[0].nombre = "Chiqui";
    usuarios[0].apellido = "Gimenez";
    usuarios[1].dni = 42215992;
    usuarios[1].nombre = "Pablo";
    usuarios[1].apellido = "Nonazo";
    usuarios[2].dni = 42215993;
    usuarios[2].nombre = "Romina";
    usuarios[2].apellido = "Goles";
    usuarios[3].dni = 42215994;
    usuarios[3].nombre = "Sebastián";
    usuarios[3].apellido = "Martote";

    prestamos[0].dni = 42215991;
    prestamos[0].idRetiro = 1;
    prestamos[0].idDevolucion = 3;
    prestamos[0].tiempoDeUso = 45;
    prestamos[1].dni = 42215991;
    prestamos[1].idRetiro = 1;
    prestamos[1].idDevolucion = 3;
    prestamos[1].tiempoDeUso = 15; // Dos

    prestamos[2].dni = 42215992;
    prestamos[2].idRetiro = 3;
    prestamos[2].idDevolucion = 1;
    prestamos[2].tiempoDeUso = 25;
    prestamos[3].dni = 42215992;
    prestamos[3].idRetiro = 1;
    prestamos[3].idDevolucion = 3;
    prestamos[3].tiempoDeUso = 90; // Cuatro

    prestamos[4].dni = 42215993;
    prestamos[4].idRetiro = 3;
    prestamos[4].idDevolucion = 2;
    prestamos[4].tiempoDeUso = 15;
    prestamos[5].dni = 42215993;
    prestamos[5].idRetiro = 3;
    prestamos[5].idDevolucion = 2;
    prestamos[5].tiempoDeUso = 95; // Seis

    prestamos[6].dni = 42215994;
    prestamos[6].idRetiro = 2;
    prestamos[6].idDevolucion = 2;
    prestamos[6].tiempoDeUso = 15;
    prestamos[7].dni = 42215994;
    prestamos[7].idRetiro = 2;
    prestamos[7].idDevolucion = 2;
    prestamos[7].tiempoDeUso = 10; // Ocho

    prestamos[8].dni = 42215991;
    prestamos[8].idRetiro = 1;
    prestamos[8].idDevolucion = 2;
    prestamos[8].tiempoDeUso = 15;
    prestamos[9].dni = 42215991;
    prestamos[9].idRetiro = 1;
    prestamos[9].idDevolucion = 2;
    prestamos[9].tiempoDeUso = 15; // Diez

    prestamos[10].dni = 42215994;
    prestamos[10].idRetiro = 1;
    prestamos[10].idDevolucion = 3;
    prestamos[10].tiempoDeUso = 15;
    prestamos[11].dni = 42215994;
    prestamos[11].idRetiro = 2;
    prestamos[11].idDevolucion = 1;
    prestamos[11].tiempoDeUso = 75; // Doce
}

int buscar(ST_USUARIOS usuarios[], int b) {
    int inf = 0, sup = CANTUSUARIOS, mitad;

    while(inf < sup) { // Antes era 'inf+1 != sup'
        mitad = (inf+sup)/2;
        if(b > usuarios[mitad].dni) {
            inf = mitad;
        } else {
            sup = mitad;
        }
        if(usuarios[mitad].dni == b) // Si encuentro el valor que buscaba
            return mitad;
    }
    return -1;
}

void imprimirInfractores(ST_USUARIOS usuarios[], int minutosInfractores[], int cantUsuarios) {
    for(int i = 0;i < cantUsuarios;i++) {
        if(minutosInfractores[i] > 0) {
            cout << usuarios[i].nombre << " " << usuarios[i].apellido << "(" << usuarios[i].dni << ") se excedió en " << minutosInfractores[i] << " minutos totales." << endl;
        }
    }
}

void imprimirEstacionesConMasRetiros(ST_ESTACIONES estaciones[], ST_RATIO ratio[], int cantEstaciones) {
    for(int i = 1;i < cantEstaciones;i++) { // Antes era i = 0, cosa que NO DEBERIA según el ejercicio
        if(ratio[i].retiros > ratio[i].devoluciones) {
            cout << "\nLa estación \" " << estaciones[i].nombre << "\" (" << estaciones[i].id << ") tuvo más retiros que devoluciones." << endl;
            cout << "\t" << ratio[i].retiros << " retiros y " << ratio[i].devoluciones << " devoluciones" << endl;
        }
    }
}

void procesarPrestamos(ST_ESTACIONES estaciones[], ST_USUARIOS usuarios[], ST_PRESTAMOS prestamos[], ST_RATIO ratio[], int minutosInfractores[], int cantPrestamos, int cantEstaciones, int cantUsuarios) {
    for(int i = 0; i < cantPrestamos;i++) {
        int posUsuario = buscar(usuarios, prestamos[i].dni); // antes era usuarios[i].dni
        if(posUsuario == -1) {
            cout << "ERROR: USUARIO NO ENCONTRADO" << endl;
            cout << "SE CIERRA EL PROGRAMA" << endl;
            break;
        } else {
            int posEstacionRetiro = prestamos[i].idRetiro;
            int posEstacionDevolucion = prestamos[i].idDevolucion;
            estaciones[posEstacionRetiro].cantBicis--; // Como se retiró una bici, le decremento uno
            estaciones[posEstacionDevolucion].cantBicis++; // Como llegó una bici, le incremento uno
            ratio[posEstacionRetiro].retiros++; // Sumo uno de dónde se retiró la bici
            ratio[posEstacionDevolucion].devoluciones++; // Sumo uno a dónde se devolvió la bici

            if(prestamos[i].tiempoDeUso > 60) {
                minutosInfractores[posUsuario] += (prestamos[i].tiempoDeUso-60); 
            }
        } // Cierre else 
    } // Cierre for
}