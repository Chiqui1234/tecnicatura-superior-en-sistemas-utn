/*
	Dado AAAA / MM / DD en una única variable, obtener día, mes y año por separado.
*/
#include <iostream>
using namespace std;

int main() {
	int fecha, aaaa, mm, dd = 0;
	cout << "Introduzca la fecha en formato AAAAMMDD" << endl;
	cin >> fecha;
	// Operaciones
	dd = fecha%100;
	//cout << dd << endl;
	mm = (fecha%10000-dd)/100;
	//cout << mm << endl;
	aaaa = (fecha-fecha%10000)/10000;
	//cout << aaaa;
	cout << "Es el día " << dd << " del mes " << mm << " y año " << aaaa << endl; 
}