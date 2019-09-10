#include <iostream>
#include "src/general.h"
using namespace std;
#define MAX 100

struct producto {
    unsigned int id;
    string name;
    unsigned int price;
    unsigned int stock;
    unsigned int cantVentas;
} seguimiento[MAX], stock[5]; // Habrá cinco productos

/*
2) Desarrollar un programa que, mediante la estructura recién
creada, permita al usuario crear un producto. Los IDs se deben
generar automáticamente por el algoritmo y de forma ordenada,
comenzando en uno.

3) Desarrollar un conjunto de algoritmos que permita ejecutar
las siguientes operaciones:
a) Listar todos los productos creados
b) Listar productos en stock ( "en stock" significa con una o más existencias )
c) Buscar producto por ID ( preferentemente búsqueda binaria )
d) Listar los 5 productos más vendidos, de manera descendiente (el mayor primero y la lista irá descendiendo hasta el menor vendido: dentro del top 5)

NOTA: la organización y menúes del programa queda a gusto del programador.
Se debe hacer un programa simple de leer pero, sobretodo, eficiente y
práctico para el usuario que lo vaya a utilizar.
*/
int main()
{
    int contador = 0, opcion;
    while(contador < MAX)
    {
        cout << "1. Crear un producto\n2. Listar productos creados\3. Listar productos disponibles en stock\n4. Buscar producto por ID\n5. Ver los 5 productos más vendidos" << endl;
        cin >> opcion;
        if(opcion == 1)
        {
            cargarProducto(seguimiento);
        } else if(opcion == 2)
        {
            listar(seguimiento);
        } else if(opcion == 3)
        {
            listar(stock);
        } else if(opcion == 4)
        {
            buscar(seguimiento, id); // Para que busque el ID
        } else if(opcion == 5)
        {
            ordenar(seguimiento, 5); // Le paso seguimiento para que tenga la cantidad de ventas a mano, y el cinco para que ordene hasta 5 elementos.
        } else {
            cout << "No seleccionaste una opción válida." << endl;
            contador--;
        }
        contador++;
    }
}

//PUP => elementoBuscado - inicio = rango