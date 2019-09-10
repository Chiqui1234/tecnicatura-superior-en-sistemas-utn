#include <iostream>
using namespace std;

int buscarPosicion(int arreglo[5], int consulta, int i)
{
    
    if( arreglo[i] == consulta ) { // Si el número en dicha posición es el buscado, lo devuelvo
        return i;
    }
    else if( i > 5 ) { // Si la 'i' es mayor de 5, es decir, me salgo del espacio en memoria sin encontrar nada: devuelvo -1 y salgo de la función
        return -1;
    }
    return buscarPosicion(arreglo, consulta, i+1); // Si nada de ésto pasa: busco aumentando el índice en 1 cada vez
}

int main()
{
    int numeros[5] = {1, 3, 5, 7, 9}, consulta;
    cout << "Tenemos un array con los números 1, 3, 5, 7 y 9" << endl;
    cout << "Saber la posición del número ";
    cin >> consulta;
    cout << "La posición del número " << consulta << " es " << buscarPosicion(numeros, consulta, 0) << endl;
    return 0;
}