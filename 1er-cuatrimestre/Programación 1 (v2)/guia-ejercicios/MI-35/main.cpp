#include <iostream>
using namespace std;

long double factorial(int numero)
{
    if(numero == 1)
        return 1;
    return factorial(numero-1)*numero;
}

bool multiplo(int nro, int multiplo)
{
    if(nro%multiplo==0)
    {
        return true;
    }   
    return false;
}

int main() {
    int cantMultiplo3 = 0, cantMultiplo5 = 0;
    int cantMultiplos = 0;
    int numeroActual, cantNumeritos;
    cout << "¿Cuántos números querés probar? ";
    cin >> cantNumeritos;
    for(int i = 0;i < cantNumeritos;i++)
    {
        cout << "Ingresá tu número: ";
        cin >> numeroActual;
        cout << "El factorial de " << numeroActual << " es " << factorial(numeroActual) << endl;
        if( multiplo(numeroActual, 3) && multiplo(numeroActual, 5) ) // Si es divisible por 3 y 5 a la vez
        {
            cantMultiplos++;
            cout << numeroActual << " es divisible tanto por 3 como por 5" << endl;
        }
        else  // Si no es divisible por 3 y 5 a la vez, quizá es divisible por 3 ó 5
        {
            if( multiplo(numeroActual, 3) ) // Si es divisible por 3
            {
                cantMultiplo3++;
                cout << numeroActual << " es divisible por 3" << endl;
            }
            else if( multiplo(numeroActual, 5) ) // Si es divisible por 5
            {
                cantMultiplo5++;
                cout << numeroActual << " es divisible por 5" << endl;
            }
        }
    }
}