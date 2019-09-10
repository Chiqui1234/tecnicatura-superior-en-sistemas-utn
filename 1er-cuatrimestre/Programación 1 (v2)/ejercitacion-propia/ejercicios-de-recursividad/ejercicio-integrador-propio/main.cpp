#include <iostream>
using namespace std;
#define J 5

int recurs(int nroFactura[J], char cobrado[J], int z, int i, int contadorNoCobrados)
{
    if(z == contadorNoCobrados)
        return z;
    if( cobrado[i] == 'n' ) {
        return recurs(nroFactura, cobrado, z, i+1, contadorNoCobrados+1);
        //nroFacturaNoCobradas[i] = nroFactura[i];
    } else {
        return recurs(nroFactura, cobrado, z, i+1, contadorNoCobrados);
    }
}

int main()
{
    int nroFactura[J] = {10, 100, 125, 193, 199};
    int nroFacturaNoCobradas[J];
    char cobrado[J] = {'n', 's', 'n', 's', 's'};
    int z = 2;
    cout << "No cobradas: " << recurs(nroFactura, cobrado, z, 0, 0);
    return 0;
}