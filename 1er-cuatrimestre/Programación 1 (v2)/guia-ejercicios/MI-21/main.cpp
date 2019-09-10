#include <iostream>
using namespace std;

int main()
{
    // Dados N valores, informar el mayor, el menor y en qué posición del conjunto fueron ingresados
    int menor, mayor, n;
    cout << "Ingrese N: ";
    cin >> n;
    float conjunto[n] = {0};
    cout << "Ingrese un número: ";
    cin >> conjunto[0];
    menor=conjunto[0];
    mayor=conjunto[0];
    for(int i = 1;i < n;i++)
    {
        cout << "Ingrese un número: ";
        cin >> conjunto[i];
        if( conjunto[i] < menor )
        {
            menor=conjunto[i];
        } 
        else if(conjunto[i] > mayor)
        {
            mayor=conjunto[i];
        }
    }
    cout << "El número mayor es el " << mayor << endl;
    cout << "El número menor es el " << menor << endl;
    return 0;
}