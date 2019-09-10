/* Se anotan 20 infracciones, de las que se sabe:
    - Gravedad de la infracción ('l', 'm', 'g') ('leve', 'medio', 'grave')
    - Tipo de infracción (1 al 4)
    - Motivo de la infracción
    - Valor de la multa por dicha infracción
*/
#define CANTINFRACCIONES 2
#include <iostream>
using namespace std;

int cargarInfracciones(int &multas, int &acumulador3, int &acumulador4, int tipoInfraccion[], int multaInfraccion[], char gravedadInfraccion[], string motivoInfraccion[])
{
    for(int i=0;i < CANTINFRACCIONES;i++)
    {
        cout << "\n\rNUEVO REGISTRO" << endl;
        cout << "Motivo de la infracción: ";
        cin >> motivoInfraccion[i];
        cout << "Gravedad de la infracción: ";
        cin >> gravedadInfraccion[i];
        cout << "Tipo de la infracción: ";
        cin >> tipoInfraccion[i];
        cout << "Multa por la infracción: ";
        cin >> multaInfraccion[i];
        multas += multaInfraccion[i];
        if(gravedadInfraccion[i] == 'g' && tipoInfraccion[i] == 3)
        {
            acumulador3++;
        }
        if(gravedadInfraccion[i] == 'g' && tipoInfraccion[i] == 4)
        {
            acumulador4++;
        }
    }
}

void resumen(int acumulador3, int acumulador4, int multas)
{
    cout << "Hay " << acumulador3 << " infracciones 3 graves y " << acumulador4 << " de tipo 4, también graves." << endl;
    if(acumulador3 >= 3 && acumulador4 >= 3)
    {
        cout << "Resúmen: Clausurar fábrica" << endl;
    } else {
        cout << "No es necesario clausurar la fábrica" << endl;
    }
    cout << "Las multas: $" << multas << endl;
}

int main()
{
    int tipoInfraccion[CANTINFRACCIONES], multas=0, multaInfraccion[CANTINFRACCIONES], acumulador3=0, acumulador4=0;
    char gravedadInfraccion[CANTINFRACCIONES];
    string motivoInfraccion[CANTINFRACCIONES];
    cargarInfracciones(multas, acumulador3, acumulador4, tipoInfraccion, multaInfraccion, gravedadInfraccion, motivoInfraccion);
    resumen(acumulador3, acumulador4, multas);
    return 0;
}
