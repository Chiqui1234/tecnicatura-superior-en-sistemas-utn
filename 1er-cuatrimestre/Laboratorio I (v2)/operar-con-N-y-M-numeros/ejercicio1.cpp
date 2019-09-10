/*
	El usuario ingresa 2 números enteros y el programa debe mostrar la suma,
	la resta, la división y multiplicación.
*/
#include <iostream>
#include <stdlib.h>
using namespace std;

int main () {
	int a, b = 0;
	cout << "Ingrese un número para operar" << endl;
	cin >> a >> endl;
	cout << "Ingrese su segundo número para operar" << endl;
	cin >> b >> endl;
	// Operaciones
	cout << "Suma: " << a+b << endl;
	cout << "Resta: " << a-b << endl;
	cout << "Multiplicación: " << a*b << endl;
	 if(a!=0 || b!=0){
	 	cout << "División: " << a/b << endl;
	 } else {
	 	cout << "No se puede dividir por cero, ya que el resultado podría ser conjunto vacío o tender a infinito." << endl;
	 	exit(EXIT_FAILURE);
	 }
exit(EXIT_SUCCESS);
}