#include <iostream>
using namespace std;

int main() 
{
    // Dado un valor M emitir un listado de los M primeros múltiplos de 3 que no lo sean de 5 (conjunto números naturales)
    int m, contador = 0, numeroActual = 3;
    cout << "Ingresá M: ";
    cin >> m;
    while(contador != m)
    {
        if(numeroActual%3 == 0 && numeroActual%5 != 0)
        {
            cout << "Número: " << numeroActual << endl;
            contador++;
        }
        numeroActual++;
    }
    return 0;
}