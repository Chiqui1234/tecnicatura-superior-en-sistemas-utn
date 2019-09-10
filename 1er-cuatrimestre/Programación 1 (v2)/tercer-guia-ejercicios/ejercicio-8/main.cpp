#include <iostream>
using namespace std;
#define CANTARTICULOS 30
#define CANTSUCURSALES 4

typedef struct detallesProducto {
    int id; // Entre 0 y 29
    int sucursal; // Entre 0 a 3
    char movimiento; // E (Entrada) ó S (Salida)
    int stock;
} ST_DETALLES;

typedef struct existencias {
    int id;
    int sucursal;
} ST_EXISTENCIAS;

void llenarMatriz(ST_DETALLES stockTotal[CANTARTICULOS][CANTSUCURSALES])
{
    for(int i = 0;i < CANTARTICULOS;i++)
    {
        for(int j = 1;j <= CANTSUCURSALES;j++)
        {
            stockTotal[i][j-1].id = i;
            stockTotal[i][j-1].sucursal = 3 / j;
            stockTotal[i][j-1].movimiento = 'E';
            stockTotal[i][j-1].stock = rand() % 100 - 5;
        }
    }
}

void mostrarStockTotal(ST_DETALLES stockTotal[CANTARTICULOS][CANTSUCURSALES])
{
    for(int j = 0;j < CANTSUCURSALES;j++)
    {
        cout << "\n\n\nSUCURSAL NRO. " << j+1 << endl;
        for(int i = 1;i < CANTARTICULOS;i++)
        {
            cout << "\nProducto Código " << stockTotal[j][i].id << ", stock: " << stockTotal[j][i].stock << endl;
            cout << "Movimiento: " << stockTotal[j][i].movimiento << endl;
        }
    }
}

void mostrarSinStock(ST_DETALLES stockTotal[CANTARTICULOS][CANTSUCURSALES])
{
    int z = 0;
    for(int i = 0;i < CANTARTICULOS;i++)
    {
        for(int j = 0;j < CANTSUCURSALES;j++)
        {
            if( stockTotal[i][j].stock <= 0 )
            {
                /*agotadas[z].id = stockTotal[i][j].id;
                agotadas[z].sucursal = stockTotal[i][j].sucursal;
                z++;*/
                cout << "El producto " << stockTotal[i][j].id << " de la Sucursal " << stockTotal[i][j].sucursal+1 << " no está en stock. Hay " << stockTotal[i][j].stock << " existencias." << endl;
            }
        }
    }
}

int main()
{
    ST_DETALLES stockTotal[CANTARTICULOS][CANTSUCURSALES]; // El stock inicial se carga en una matriz de artículos por sucursales cuyas celdas contienen un valor entero que indica el stock de cada artículo en cada sucursal
    ST_EXISTENCIAS agotadas[CANTARTICULOS]; // Acá guardo los códigos de producto y la sucursal que no tiene stock de algún producto en particular
    int cantSinStock = 0;
    llenarMatriz(stockTotal);
    mostrarStockTotal(stockTotal);
    cout << endl << endl;
    mostrarSinStock(stockTotal);
}