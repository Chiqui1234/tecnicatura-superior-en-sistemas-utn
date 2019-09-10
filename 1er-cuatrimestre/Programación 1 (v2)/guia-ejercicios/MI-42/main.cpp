#include <iostream>
using namespace std;

void cargar(int &dia, int &mes, int &ano, char &sexo, int edad, char &status)
{
    cout << "Día de nacido: ";
    cin >> dia;
    cout << "Mes de nacido: ";
    cin >> mes;
    cout << "Año de nacimiento: ";
    cin >> ano;
    edad = 2019-ano; // Calculo la edad para que estadistica() vea si la persona agregada es la más vieja
    cout << "Género (m/f): ";
    cin >> sexo;
    cout << "¿Agregar otro registro? s/n ";
    cin >> status;
}

void estadistica(int &dia, int &mes, int &ano, char &sexo, int &cantOct, int &cant9_7_90, int &mujeresPrim82, int edad, int edadMasViejo, char &sexoViejo)
{
    if(mes == 10)
    {
        cantOct++;
    }
    if( ano < 1990 || ano == 1990 && mes <= 7 && dia < 9 || ano == 1990 && mes <= 6 )
    {
        cant9_7_90++;
    }
    if( sexo == 'f' && ano == 1982 )
    {
        if( mes == 9 && dia >= 21 || mes == 10 || mes == 11 || mes == 12 && dia <= 21 )
        {
            mujeresPrim82++;
        }
    }
    if( edad > edadMasViejo )
    {
        edadMasViejo = edad;
        sexoViejo = sexo;
    }
}

void mostrarEstadisticas(int cantOct, int cant9_7_90, int mujeresPrim82, char sexoViejo)
{
    cout << "Nacidos en octubre: " << cantOct << endl;
    cout << "Nacidos antes del 9/7/1990: " << cant9_7_90 << endl;
    cout << "Nacidas en la primavera del 82: " << mujeresPrim82 << endl;
    cout << "Sexo de la persona más vieja: " << sexoViejo << endl;
}

int main()
{
    int dia, mes, ano;
    int cantOct = 0, cant9_7_90 = 0, mujeresPrim82 = 0, edad, edadMasViejo;
    char sexo, sexoViejo;
    char status = 's';
    while(status == 's')
    {
        cargar(dia, mes, ano, sexo, edad, status);
        estadistica(dia, mes, ano, sexo, cantOct, cant9_7_90, mujeresPrim82, edad, edadMasViejo, sexoViejo);
    }
    mostrarEstadisticas(cantOct, cant9_7_90, mujeresPrim82, sexoViejo);
    return 0;
}