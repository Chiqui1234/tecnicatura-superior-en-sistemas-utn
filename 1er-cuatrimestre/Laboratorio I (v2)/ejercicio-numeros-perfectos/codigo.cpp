/*	Escribir un programa que encuentre los 3 primeros numeros perfectos pares.
	Un nro es perfecto cuando la suma de todos los divisores son iguales a ese numero.
	Un número perfecto es aquél que es igual a la suma de sus divisores positivos. Ejemplo: 6 porque 1 + 2 + 3 = 6.
	Lo mismo con el 28, porque 1 + 2 + 4 + 7 + 14 resulta en 28. Ídem con el 496 y el 8128.
*/
#include <iostream>
using namespace std;

int main() {
	int numero = 1, divisor = 1, totalDivisores = 0, cantidad = 0;
	//int divisor = 1;
	cout << "¿Cuáles son los 3 primeros números perfectos pares?" << endl;
	//cout << "Numero % 10: " << numero%10 << endl; si nro=226 -> 6
	//cout << "Número % 100: " << numero%100 << endl; si nro=226 -> 26
	while(cantidad < 3) {
		
		for(;divisor <= numero;divisor++) {
		 if( ((numero%divisor == 0) && (numero%10 == 6)) || ((numero%divisor == 0) && (numero%100 == 28)) ) {
		  totalDivisores=divisor+totalDivisores;
		  	if(totalDivisores==numero) { 
		  		cout << "El número " << numero << " es perfecto par porque la suma de sus divisores resulta en " << totalDivisores << endl;
		 		numero++;
		 		divisor=1;
		 		cantidad++;
		 	} else {
		 		numero++;
		 		divisor=1;
		 	}
		 } else {
			numero++;
			divisor=1;
		 }
		}

	}
	cout << "Número: " << numero << endl;
	cout << "Divisor: " << divisor << endl;
	cout << "Total divisores: " << totalDivisores << endl;
}