/* Ingresar valores positivos y cortar con el bucle cuándo se ingrese un número negativo.
    Informar la cantidad de valores ingresados */
#include <iostream>

using namespace std;

int main()
{
    int aux = 0, acumulador = 0;
    cout << "Hello world!" << endl;
    cout << "Ingresá valores positivos. Cerrar el programa con un número negativo" << endl;
    while(aux >= 0)
    {
        cout << "Aux: ";
        cin >> aux;
        if(aux >= 0){acumulador++;}
    }
    cout << "Se ingresaron " << acumulador << " números." << endl;
    return 0;
}
