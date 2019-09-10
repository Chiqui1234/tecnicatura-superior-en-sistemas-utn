#include <iostream>
using namespace std;

int calcularFactorial(int numero)
{
    if(numero == 0)
        return 1;
    return numero*calcularFactorial(numero-1);
}

int main()
{
    int numero;
    cout << "Calcular el factorial de ";
    cin >> numero;
    cout << "Resultado: " << calcularFactorial(numero) << endl;;
}