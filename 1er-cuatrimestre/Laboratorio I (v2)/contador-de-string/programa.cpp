/*
	Dada una serie de caracteres que conforman una oración, dónde cada palabra está separada de la siguiente por un
	carácter blanco y la oración finaliza con un punto. Se pide informar: contador de cada vocal, cantidad de
	palabras de la oración, cantidad de letras que posee la palabra más larga.
*/
#include <iostream>
using namespace std;
int main() {
	int contadorVocal[5]={0,0,0,0,0}, cantidadLetras=1, cantidadPalabras=0, cantidadLetrasPalabraMayor=0;
	string oracion="Una prueba";
	//cin >> oracion;

for(int i=0;i <= oracion.size();i++) {
	if( (oracion[i] != '.') && ( (oracion[i] != ' ') || (oracion[i] == oracion[oracion.size()] ) ) ) {
		if(oracion[i] == 'a') {
			contadorVocal[0]++;
			cantidadLetras++;
		} else if(oracion[i] == 'e') {
			contadorVocal[1]++;
			cantidadLetras++;
		} else if(oracion[i] == 'i') {
			contadorVocal[2]++;
			cantidadLetras++;
		} else if(oracion[i] == 'o') {
			contadorVocal[3]++;
			cantidadLetras++;
		} else if(oracion[i] == 'u') {
			contadorVocal[4]++;
			cantidadLetras++;	
		} else {
			cantidadLetras++;
		}

	} else { // Si hay un punto o espacio

			if(oracion[i] == '.') {
				cout << "¡Finalizó la oración con un punto!" << endl;
			}
			if(cantidadLetras > cantidadLetrasPalabraMayor) {
				cantidadLetrasPalabraMayor=cantidadLetras;
				cantidadLetras=1;
			}

	}

}
cout << "Oración dada: " << oracion << endl;
cout << "Palabra más larga: " << cantidadLetrasPalabraMayor << " letras." << endl;
cout << "Cantidad de A: " << contadorVocal[0] << "." << endl;
cout << "Cantidad de E: " << contadorVocal[1] << "." << endl;
cout << "Cantidad de I: " << contadorVocal[2] << "." << endl;
cout << "Cantidad de O: " << contadorVocal[3] << "." << endl;
cout << "Cantidad de U: " << contadorVocal[4] << "." << endl;
}