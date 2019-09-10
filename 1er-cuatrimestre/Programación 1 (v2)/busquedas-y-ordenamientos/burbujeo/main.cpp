#include <iostream>
using namespace std;
#define ELEMENTOSVEC 10

void ordenar(int numeros[]) {
    int aux;
    bool cambios = true;
    for(int i = 0;i < ELEMENTOSVEC && cambios;i++) {
        cambios = false;
        for(int j = 0;j < ELEMENTOSVEC-1-i;j++) {   // ELEMENTOSVEC-1 porque si nos situaramos en la última celda y hacemos numeros[j+1], leemos afuera del vector y kbum.
            if( numeros[j] > numeros[j+1] ) {       // ELEMENTOSVEC-i porque en cada pasada se ordena un número. De esta manera nos ahorramos recorrer de manera innecesaria
                aux = numeros[j+1];
                numeros[j+1] = numeros[j];
                numeros[j] = aux;
                cambios = true;                     // Creé esta "bandera" para que se de cuenta si ya no hay cambios, porque si no hay cambios quiere decir que el vector ya está ordenado (y lo estamos recorriendo al pedo, jajaja)
            }
        }
    }
}

int main() {
    int numeros[ELEMENTOSVEC] = {3, -1, 2, 9, 6, 16, 777, 40, 66, 15};
    ordenar(numeros);
    for(int i = 0;i < ELEMENTOSVEC;i++) {
        cout << "numeros[i]: " << numeros[i] << endl;
    }
    
}