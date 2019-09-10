#include <iostream>
using namespace std;

void cargaDatos(int &cantIntegrantes, int &edad, string &domicilio, string &nombre, string &apellido, char vivienda, char &genero, char &estudios, char &estadoEstudios)
{
    cout << "Integrantes: ";
    cin >> cantIntegrantes;
    while(cantIntegrantes > 0) // Un while para entrar si hay integrantes
    {    
        cout << "Domicilio de la familia: ";
        cin >> domicilio;
        cout << "Tipo de vivienda: ";
        cin >> vivienda;
        for(int i = 0;i < cantIntegrantes && cantIntegrantes > 0;i++) // Ingreso los datos de los integrantes
        {
            cout << "Nombre del integrante " << i+1 << ": ";
            cin >> nombre;
            cout << "Apellido: ";
            cin >> apellido;
            cout << "Edad: ";
            cin >> edad;
            cout << "Género (f, m): ";
            cin >> genero;
            cout << "Nivel de estudios (n, p, s, t, u): ";
            cin >> estudios;
            cout << "Estado del estudio (i, c): ";
            cin >> estadoEstudios;   
        }
        cout << "Integrantes: ";
        cin >> cantIntegrantes;
    }
    cout << "Se dejaron de cargar datos" << endl;
}

bool estudiosPrimarios(char estudios)
{
    if( estudios === 's' || estudios === 't' || estudios === 'u' )
        return true;
    return false;
}

bool analfabeto(char estudios, int edad)
{
    if( estudios === 'n' && edad > 10 )
        return true;
    return false;
}

float promedio(int edades, int cantPersonas) // Para sacar el promedio de la familia y de la ciudad
{
    return edades/cantPersonas;
}

int main()
{
    // Mostrar los encuestados que hayan terminado los estudios primarios
    // El porcentaje de analfabetismo (mayores de 10 años sin estudios)
    // El domicilio de la familia con más integrantes que viven en un único departamento: falta función (o código simple)
    // Edad promedio de cada familia y de la ciudad
    // Cantidad de encuestados con estudios incompletos: falta función
    // Porcentaje de encuestados de género masculino y femenino: falta función (o código simple)
    
    int cantIntegrantes, cantIntegrantesMayorFamilia, edad = 0; // cantIntegrantesMayorFamilia es para saber cuál es la familia con más integrantes
    int cantEstudiosIncompletos = 0, cantAnalfabetos = 0, cantEstudiosPrimarios = 0;
    int edadPromedioCiudad = 0; // edadPromedioFamilia no es necesario porque se puede imprimir en el momento al terminar de cargar los datos :D
    string domicilio, domicilioMayor, nombre, apellido; // Domicilio mayor es para el que tiene más personas
    char vivienda, genero, estudios, estadoEstudios;
    cargaDatos(cantIntegrantes, edad, domicilio, nombre, apellido, vivienda, genero, estudios, estadoEstudios);
    // Imprimo resultados
    return 0;
}