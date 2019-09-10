#include <iostream>
using namespace std;

bool esPrimo(int numero)
{
    int cantDivisores = 0;
    if(numero==1)
        return false;
    for(int i = 1;i < numero;i++) // i = 1 porque no se puede dividir por cero
    {
        if(numero%i==0)
        {
            cantDivisores++;
        }
    }
    if( cantDivisores < 2)
        return true;
    return false;
}

int main()
{
    int numerito;
    cout << "Ingresá un número: ";
    cin >> numerito;
    cout << "¿Es primo? " << esPrimo(numerito) << endl;
}