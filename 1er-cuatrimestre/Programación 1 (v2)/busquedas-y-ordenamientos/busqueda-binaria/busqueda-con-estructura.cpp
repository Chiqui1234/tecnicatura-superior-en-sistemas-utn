#include <iostream>
using namespace std;

struct producto {
    int id;
    string nombre;
    int precio;
} ST_PRODUCTO;

void crearProductos(producto listado[], int n)
{
    for(int i = 0;i < n;i++)
    {
        string idAString = to_string(i+1);
        listado[i].id = i;
        listado[i].nombre = "Producto "+idAString;
        listado[i].precio = rand()%10;
        cout << "Se creó el producto: " << listado[i].nombre << endl;
    }
}

int busquedaBinaria(producto listado[], int superior, int busqueda)
{
    int inferior = 0; // Por ahora, pero se va incrementando en el bucle
    int mitad = (inferior+superior)/2;
    //bool bandera = false;
    //while (inferior <= superior && bandera == false) {
    while (inferior < superior) { // también se ve a veces como inferior+1 != superior
        //mitad = (inferior+superior)/2;
        if(listado[mitad].id > busqueda) {
            superior = mitad;
            mitad = (inferior+superior)/2;
        } else {
            inferior = mitad;
            mitad = (inferior+superior)/2;
        }
        if(listado[mitad].id == busqueda) // Si encontramos el número
            return mitad;
    }
    return -1;
}

int main()
{
    const int n = 10;
    producto listado[n];
    crearProductos(listado, n);
    int posicion = busquedaBinaria(listado, n, 7);
    cout << "Posición del id \"7\": " << posicion << ". El nombre del producto: " << listado[posicion].nombre << endl;
}