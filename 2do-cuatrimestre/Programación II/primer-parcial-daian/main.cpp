#include <iostream>
#include<cstdlib>
#include<stdlib.h>
#include <iostream>
#include "header.h"
using namespace std;

int main(){

    int cant_de_pisos = 0;
    int consumo_kw = 0;
    int mayorConsumo = 0;
    int dif = 0;
    int kw_consumi = 0;

    for(int i=0; i<1;i++){
        cout << "ud esta ingresando los datos del ascensor " << i + 1 << endl;
        int pisoFinal = 99;
        int pisoInicial = 99;
        while(pisoInicial != -5 && pisoFinal != -5){
            int cant_de_pisos = diferencia(pisoInicial,pisoFinal, dif);
            int consumo_kw = consumo (cant_de_pisos, kw_consumi);
            mayorConsumo = consumo_kw;
            cout << mayorConsumo;
        }
        int mayorF = mayor(consumo_kw,mayorConsumo);
        cout << mayorF;
    }


    system("pause");
    return 0;
}
