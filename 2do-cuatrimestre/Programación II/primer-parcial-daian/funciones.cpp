#include<cstdlib>
#include<stdlib.h>
using namespace std;
#include <iostream>

#include "header.h"
int diferencia(int &pisoInicial, int &pisoFinal , int &dif ){
    cout << "\ningrese piso inicial, sino -5 para terminar" << endl;
    cin >> pisoInicial;
    cout << "ingrese piso final" << endl;
    cin >> pisoFinal;

    dif = pisoFinal-pisoInicial;
    return dif;
}

int consumo (int &cant_de_pisos, int &kw_consumi){

if (cant_de_pisos > 0){
    kw_consumi = cant_de_pisos * 500;
    cout << "kw consumidos de subida: " <<  kw_consumi << endl;
}else if ((cant_de_pisos < 0) && (cant_de_pisos > 5)){
    kw_consumi = cant_de_pisos * 120 * (-1) * 0.99;
}else {
    kw_consumi = cant_de_pisos * 120 * (-1);
}
return kw_consumi;
}

int mayor (int &kw_consumidos, int &mayorConsumo){
    if(kw_consumidos >= mayorConsumo){
        mayorConsumo=kw_consumidos;
    }
    return mayorConsumo;
}
