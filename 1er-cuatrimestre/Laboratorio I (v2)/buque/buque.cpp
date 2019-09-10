/*
	Buque translada 100 contenedores a tres diferentes puertos. Los puertos se identifican con 1, 2 y 3.
	De cada contenedor que el buque translada se pide: identificación del contenedor, peso en kg, puerto de arribo.
	Se pide calcular e informar: el peso total que el buque debe transladar, la identificación del contenedor de
	mayor peso, la cantidad de contenedores que debe transladar a cada puerto.
*/
#include <iostream>
using namespace std;

int main() {
	int id=0, cantidadContenedores=0, pesoTotal=0, pesoMayor=0, idMayor=0, puertoActual=0;
	int pesoIndividual[cantidadContenedores], puertoArribo[3]={0,0,0};
	cout << "\nIndicá la identificación del contenedor" << endl;
	cin >> id;
	cout << "\nIndicá el peso de tu contenedor" << endl;
	cin >> pesoIndividual[cantidadContenedores];
	pesoTotal+=pesoIndividual[cantidadContenedores];
	cout << "\nIndicá el puerto de arribo" << endl;
	cin >> puertoActual;
		if(puertoActual==1) {
			puertoArribo[0]++;
		} else if(puertoActual==2) {
			puertoArribo[1]++;
		} else if(puertoActual==3) {
			puertoArribo[2]++;
		} else {cout << "\nNo indicaste un puerto correcto, cerrando programa" << endl;}
	pesoIndividual[cantidadContenedores]=pesoMayor;

	for(cantidadContenedores=1;cantidadContenedores <= 2;cantidadContenedores++) {

		cout << "\nIndicá la identificación del contenedor" << endl;
		cin >> id;
		cout << "\nIndicá el peso de tu contenedor" << endl;
		cin >> pesoIndividual[cantidadContenedores];
		pesoTotal+=pesoIndividual[cantidadContenedores];
		cout << "\nIndicá el puerto de arribo" << endl;
		cin >> puertoActual;
		if(puertoActual==1) {
			puertoArribo[0]++;
		} else if(puertoActual==2) {
			puertoArribo[1]++;
		} else if(puertoActual==3) {
			puertoArribo[2]++;
		} else {cout << "\nNo indicaste un puerto correcto, cerrando programa" << endl;}

		if(pesoIndividual[cantidadContenedores] > pesoMayor) {
			pesoMayor=pesoIndividual[cantidadContenedores];
			idMayor=cantidadContenedores+1;
		}

	}

	cout << "\nResúmen: " << endl;
	cout << "Peso total de todos los contenedores: " << pesoTotal << endl;
	cout << "El contenedor " << idMayor << " es el más pesado, con " << pesoMayor << " kilogramos." << endl;
	cout << "Se transladan " << puertoArribo[0] << " al Puerto 1, " << puertoArribo[1] << " al Puerto 2 y " << puertoArribo[2] << " al Puerto 3" << endl;
	
}
