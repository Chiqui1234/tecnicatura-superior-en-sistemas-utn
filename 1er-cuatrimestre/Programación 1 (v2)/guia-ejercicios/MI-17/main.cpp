#include <iostream>

using namespace std;

int main()
{
    // Se ingresan valores float. Cada valor es el sueldo de un empleado. El cero se ingresa para indicar el fin del conjunto
    // Desarrollar programa que informe:
    // Los que ganan menos de $1520
    // Los que ganan $1520 o más y menos de $2780
    // Los que ganan $2780 o más y menos de $5999
    // Los que ganan $5999 o más
    cout << "::INGRESE SUELDOS DE EMPLEADOS::" << endl;
    int contador = 0, contA = 0, contB = 0, contC = 0, contD = 0;
    float aux = 1;
    while(aux > 0)
    {
        cout << "Ingresá sueldo de empleado " << contador << ": ";
        cin >> aux;
        if( aux > 0 )
        {
            if( aux < 1520 )
            {
                contA++;
            }
            else if( aux >= 1520 && aux < 2780)
            {
                contB++;
            }
            else if( aux >= 2780 && aux < 5999 )
            {
                contC++;
            }
            else if( aux >= 5999 )
            {
                contD++;
            }
            contador++;
        } // Cierre if (aux > 0)
    } // Cierre while
    // Imprimo resúmen
    cout << "Hay " << contA << " empleados que cobran menos de $1520" << endl;
    cout << "Hay " << contB << " empleados que cobran más de $1520 y menos de $2780" << endl;
    cout << "Hay " << contC << " empleados que cobran más de $2780 y menos de $5999" << endl;
    cout << "Hay " << contD << " empleados que cobran más de $5999" << endl;
    return 0;
}
