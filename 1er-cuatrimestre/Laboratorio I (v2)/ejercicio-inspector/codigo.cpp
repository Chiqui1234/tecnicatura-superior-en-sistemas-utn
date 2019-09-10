/*
	Se realiza una inspección en una fábrica de pinturas y se detectan infracciones.
	De cada infracción se toman los siguientes datos:
	- Tipo de infracción (1, 2, 3 o 4)
	- El valor de la multa (AR$)
	- Categoría de la infracción (m, l, g)
	Al final del proceso se pide informar: el valor total de la multa a pagar de acuerdo al
	tipo de gravedad y además imprimir una leyenda que sea "Clausurar fábrica" si la cantidad
	de infracciones de tipo 3 y 4 con gravedad G sean mayores a tres.
	Se van a ingresar infracciones hasta que el inspector inserte -1 (se cierra el programa)
*/
#include <iostream>
using namespace std;

int main() {
// Las variables se pueden agrupar en array() pero no lo enseñaron, así que me hago el bolu2 (?)
int tipo=0, contadorM=0, contadorL=0, contadorG=0, contador3=0, contador4=0, contadorInfracciones=1;
float multasM=0, multasL=0, multasG=0;
char categoria;

while(contadorInfracciones != -1) {
	cout << "\nINGRESE LA(S) INFRACCIÓN(ES). ACTUALMENTE ESTÁ EN LA INFRACCIÓN NÚMERO " << contadorInfracciones << endl;
	contadorInfracciones++;
	cout << "Inserte el tipo de infracción (entre 1 a 4): ";
	cin >> tipo;
	if(tipo==3){contador3++;}
	if(tipo==4){contador4++;}
	cout << "\nInserte la gravedad de la infracción (m, l, g): ";
	cin >> categoria;
	cout << "\nIngrese la multa en AR$ correspondiente a la gravedad de la infracción: "; 
	if(categoria=='m'){
		contadorM++;
		cin >> multasM;
	} else if(categoria=='l'){
		contadorL++;
		cin >> multasL;
	} else if(categoria=='g'){
		contadorG++;
		cin >> multasG;
	} else {
		cout << "No insertaste ninguna letra especificada. Se asigna la \"L\" automáticamente";
		contadorM++;
		cin >> multasM;
	}
	cout << "¿Desea seguir agregando infracciones? Presione cualquier número para seguir agregando registros o \"-1\" para salir: ";
	int estado;
	cin >> estado;
	if(estado == -1) {
		contadorInfracciones==-1; // Esto es al dope porque va a brekear igual, pero lo hago porque pintó
		break;
	}
	if(estado == contadorInfracciones) {
		/* Si ESTADO es igual a contadorInfracciones, los igualamos de hincha pelotas, pero también es al dope.
			Lo importante es que no haya una línea que modifique el valor del contador de infracciones, así el
			ciclo informa correctamente cuántas infracciones se están llevando a cabo */
		estado==contadorInfracciones;
	}
}

	cout << "\n¡Genial! Hubo " << contadorInfracciones << " infracciones." << endl;
	cout << "Cantidad de tipos de infracción 3 (severo): " << contador3 << endl;
	cout << "Cantidad de tipos de infracción 4 (de gravedad): " << contador4 << endl;
	cout << "Cantidad de gravedades M: " << contadorM << endl;
	cout << "Cantidad de gravedades L: " << contadorL << endl;
	cout << "Cantidad de gravedades G: " << contadorG << endl;
	cout << "Cantidad multas M: " << multasM << endl;
	cout << "Cantidad multas L: " << multasL << endl;
	cout << "Cantidad multas G: " << multasG << endl;
	cout << "Multas totales: " << multasM+multasL+multasG << endl;
	if( (contador3>=3 && contadorG>=3) && (contador4>=3 && contadorG>=3) ) {
		cout << "\nLa cantidad de infracciones de tipo 3 y 4 con gravedad G son mayores a tres: CLAUSURAR FÁBRICA." << endl;
	} else {
		cout << "\nLa cantidad de infracciones de tipo 3 y 4 no son las suficientes para ordenar la clausura de la fábrica." << endl;
	}
	return 0;
}