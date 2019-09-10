#include <iostream>
using namespace std;

void ingresarValorMultas(int valorGravedad[3]) {
    cout << "Infracción Nro. 1 es la más leve, y la Nro. 3 la peor." << endl;
    for(int i = 0;i < 3;i++) {
        cout << "Ingresá el valor en AR$ de la gravedad Nro. " << i+1 << ":";
        cin >> valorGravedad[i];
    }
}

void cargarInfracciones(int infraccionTipo[20], int infraccionGravedad[20], string infraccionMotivo[20], int &valorMulta, int valorGravedad[3], int &cantInfracciones3, int &cantInfracciones4) {
    cout << "Cargá las infracciones de la Pinturería: " << endl;
    for(int i = 0;i < 5;i++) { // NOTA: En producción debe ser "i < 20"
        cout << "NUEVO REGISTRO" << endl;
        cout << "Tipo de infracción (1, 2, 3 ó 4; el más grave): ";
        cin >> infraccionTipo[i];
        cout << "Escriba el motivo de la infracción: ";
        cin >> infraccionMotivo[i];
        cout << "Gravedad de la infracción (1, 2 ó 3): "; // Antes era L, M o G
        cin >> infraccionGravedad[i];
        valorMulta += valorGravedad[infraccionGravedad[i]]; // Sumo al total de la multa el espacio en valorGravedad que corresponda
        cout << "Valor multa actual: " << valorMulta << endl;
        cout << "Infraccion Gravedad [i]: " << infraccionGravedad[i] << endl;
        cout << "Valor gravedad actual: " << valorGravedad[infraccionGravedad[i]] << endl;
        if(infraccionTipo[i] == 3 && infraccionGravedad[i] == 3) {
            cantInfracciones3++;
        }
        if(infraccionTipo[i] == 4 && infraccionGravedad[i] == 3) {
            cantInfracciones4++;
        }
    }
}

void resumen(int &valorMulta, int &cantInfracciones3, int &cantInfracciones4) {
    cout << "El valor de la multa es de $" << valorMulta << " y hay " << cantInfracciones3 << " infracciones de tipo 3 GRAVES, mientras que existen " << cantInfracciones4 << " infracciones de tipo 4 GRAVES." << endl;
    if(cantInfracciones3 >= 3 && cantInfracciones4 >= 3) {
        cout << "Clausurar fábrica" << endl;
    } else {
        cout << "Esta fábrica no debe ser clausurada" << endl;
    }
}

int main() {
    int infraccionTipo[20] = {0}; // 1, 2, 3 ó 4
    int infraccionGravedad[20] = {0};
    string infraccionMotivo[20];
    int valorMulta = 0;
    int valorGravedad[3] = {0};
    int cantInfracciones3 = 0, cantInfracciones4 = 0; // Cuándo infracción es 3+G y 4+G (en el programa es 3+3 y 4+3)
    ingresarValorMultas(valorGravedad);
    cargarInfracciones(infraccionTipo, infraccionGravedad, infraccionMotivo, valorMulta, valorGravedad, cantInfracciones3, cantInfracciones4);
    /* RESUMEN DEL PROGRAMA */
    resumen(valorMulta, cantInfracciones3, cantInfracciones4); // Informa las infracciones graves y el valor total de la multa a pagar
}