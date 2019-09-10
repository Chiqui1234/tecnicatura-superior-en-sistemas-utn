#include <iostream>
using namespace std;
#define CANT 10
int main()
{
    int vecA[CANT] = {0};
    int vecB[CANT];
    for(int i = 0;i < CANT;i++)
    {
        cout << "Valor del espacio " << i << " del vector A: " << vecA[i] << endl;
        cout << "Valor del espacio " << i << " del vector B: " << vecB[i] << endl;
    }
    cout << "vecA[CANT] = {0};" << endl;
    cout << "vecB[CANT]; (sin inicializar en cero)." << endl;
    cout << "El vecB debería arrojar números aleatorios, ya que C++ no inicializa las variables por defecto." << endl;
}