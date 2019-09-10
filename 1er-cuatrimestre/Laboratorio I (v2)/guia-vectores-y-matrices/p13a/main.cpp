#include <iostream>
using namespace std;
/* Ingresar un valor entero CANT (< 50) y a continuación un conjunto SINOR de CANT elementos.
	Desarrollar un programa que determine e imprima:
a) El conjunto SINOR en el que cada elemento original se intercambie por su simétrico
b) El conjunto SINOR ordenado de menor a mayor sobre si mismo, indicando la posición
que ocupaba cada elemento en el conjunto original.	*/

void registrar(int cantidadNumeros, int sinor[]) {
	for(int i=0;i < cantidadNumeros;i++){
		cout << "Número: ";
		cin >> sinor[i];
	}
}

void espejar(int cantidadNumeros, int sinor[]) {
  int auxiliar; /* Acá voy a guardar el valor de la celda que estoy por sobre-escribir. Así, la tengo guardada en algún lado para después guardarla en su celda espejada. */
	for(int i=2;i < cantidadNumeros/2;i++) {
    auxiliar=sinor[i];
    sinor[i]=sinor[cantidadNumeros-i-1];
		sinor[cantidadNumeros-i-1]=auxiliar;
	}
}

void visualizar(int cantidadNumeros, int sinor[]) {
	for(int i=0;i < cantidadNumeros;i++) {
		cout << "\t" << sinor[i] << endl;
	}
}

int main() {
	int cantidadNumeros=0;
	cout << "Cantidad de numeros que queres agregar al sistema: ";
	cin >> cantidadNumeros;
	int sinor[cantidadNumeros];

	registrar(cantidadNumeros, sinor); // Registro de números
	espejar(cantidadNumeros, sinor); // Se intercambian los valores
	cout << "\nARRAY INVERTIDO" << endl;
	visualizar(cantidadNumeros, sinor); // Se muestran los valores
}
