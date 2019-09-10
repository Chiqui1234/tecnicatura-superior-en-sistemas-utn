/*
	Dados n valores informar la posición del número ingresado y el mayor o menor.
*/
#include <iostream>
using namespace std;

int main() {
 int contador=0, posicionMayor=0, posicionMenor=0, nMayor, nMenor, numero;
 cout << "CANTIDAD DE NÚMEROS A INGRESAR: ";
 cin >> contador;
 cout << "\nIngrese su número: ";
 cin >> numero;
 nMayor=numero;
 nMenor=numero;
 posicionMayor=contador;
 posicionMenor=contador;
 contador--;

 for(;contador!=0;contador--) {
 	cout << "\nIngrese su número: ";
 	cin >> numero;
 		if(numero>nMayor){
 			nMayor=numero;
 			posicionMayor=contador;
 		}
 		else if(numero<nMenor){
 			nMenor=numero;
 			posicionMenor=contador;
 		} else {}
 }
 // Imprimo el resúmen
 cout << "\n\nEl número más grande es " << nMayor << ", que se registró en la posición " << posicionMayor << endl;
 cout << "El número más chico es " << nMenor << ", que se registró en la posición " << posicionMenor << endl;
}