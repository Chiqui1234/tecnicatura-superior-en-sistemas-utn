#include <iostream>
using namespace std;

// Desarrollar una función que notifique si un número de entrada es primo

bool esPrimo(int a)
{
    int counter = 0;
    for(int i = 1;i <= a;i++)
    {
        if(a%i == 0)
        {
            counter++;
        }
        if(counter >= 3) // Si tiene más de dos divisores (1 y sí mismo), no es primo y hago 'return' para no gastar ciclos al pe2
            return false;
    }
    return true; // Si no se sale de la función por 'false', el número era primo
}

int main()
{
    int number;
    cout << "Digitá un número para saber si es primo: ";
    cin >> number;
    bool result = esPrimo(number);
    cout << "¿Es primo? " << result << endl;
}