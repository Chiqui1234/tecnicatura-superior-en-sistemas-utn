#include <iostream>
using namespace std;

int main() {
    int menor = 0, mayor = 0;
    int valor = 0;
    for(int i = 0;i < 4;i++) {
        cout << "Ingresá un valor: ";
        cin >> valor;
        if(valor > mayor) {
            mayor=valor;
        } else if(valor < menor) {
            menor=valor;
        }
    }
    cout << "El valor máximo: " << mayor << endl;
    cout << "El valor mínimo: " << menor << endl;
}