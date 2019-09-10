#include <iostream>
using namespace std;

int main()
{
    int n, m;
    cout << "Ingresá N: ";
    cin >> n;
    cout << "Ingresá M: ";
    cin >> m;
    int matriza[n][m];
    int numerito = 1;
    for(int i = 0;i < m;i++) // Coloco componentes en la matriz por filas, osea, primero me muevo en las filas
    {
        for(int j = 0;j < n;j++) // Coloco los componentes en cada columna de 'i' fila
        {
            matriza[j][i] = numerito;
            cout << "Matriz[" << j << "][" << i << "], valor: " << numerito << endl; // Imprimo en pantalla el componente de la matriz que se genera en esa iteración
            numerito++;
        }
    }
}