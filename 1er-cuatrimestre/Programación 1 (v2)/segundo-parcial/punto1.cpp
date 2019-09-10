#include <iostream>
using namespace std;
#include "src/general.h"

int apareoDeVectoresDeValoresDistintos(int vecA[], int n, int vecB[], int m, int vecC[], int &c) {
    int i = 0, j = 0, c = 0;
    while(i < n && j < m) {
        /* Hacer una función que evite números repetidos, suponete que:
            - vecA = [0, 1, 2, 2, 4]
            - vecN = [1, 2, 3, 6]
        Debería no poner el 2 en el VecC :D
        */
        if(vecA[i] < vecB[j]) {
            vecC[c] = vecA[i];
            i++;
        } else { // Si es mayor o igual
            if(vecA[i] == vecB[j]) {
                i++;
                j++;
            } else { // Si vecB[j] es mayor que vecA[i]
                vecC[c] = vecB[j];
                j++;
                c++;
            }
        }
        c++;
    } // Cierre while

    /* Ahora, en caso de que un vector sea más grande que el otro,
        hacemos esta porción de código  */
    while(i < n) {
        vecC[c] = vecA[i];
        i++;
        c++;
    }
    while(j < m) {
        vecC[c] = vecB[j];
        j++;
        c++;
    }
}