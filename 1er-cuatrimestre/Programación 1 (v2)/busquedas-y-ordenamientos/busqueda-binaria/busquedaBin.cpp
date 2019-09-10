/* Este cpp es más reciente que "busqueda-con-estructura", por lo cuál podría estar mejor esta resolución...
    O más prolija ;D */
#include <iostream>
using namespace std;
#define ELEMENTOSVEC 10

int busquedaBin(int numeros[], int b) {
    int inf = 0, sup = ELEMENTOSVEC, mitad;

    while(inf+1 != sup) {
        mitad = (inf+sup)/2;
        if(b > numeros[mitad]) {
            inf = mitad;
        } else {
            sup = mitad;
        }
        cout << "Inf: " << inf << " | Sup: " << sup << endl;
        if(numeros[mitad] == b) // Si encuentro el valor que buscaba
            return mitad;
    }
    return -1;
}

int main() {
    int numeros[ELEMENTOSVEC] = {1, 3, 5, 7, 9, 11, 13, 15, 17, 19}; // Los 10 números que tengo
    int query = 13; // La consulta, también llamada 'busqueda' o 'search'. El valor es 9
    int resultado = busquedaBin(numeros, query); // Creo la variable 'resultado' para almacenar la posición de busquedaBin(), que devolverá la posición del número encontrado
    cout << "La posición será \"-1\" si el número a buscar no fue encontrado." << endl;
    cout << "El número buscado es " << query << ". Su posición es: " << resultado << endl;
}