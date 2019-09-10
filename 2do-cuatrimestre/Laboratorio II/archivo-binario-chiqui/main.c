#include "src/funciones.h"

int main()
{
    ST_INVITADO invitado;
    FILE *binary = NULL;
    BOOL status = TRUE;
    int i = 0; // Este contador lo sumo dentro de la función pre_load. Sirve para controlar el while() que imprime las personas agregadas

    /** binary = open("binario.bin", "a+"); DESCOMENTAR SI QUERÉS GRABAR (con permisos de append+) EN EL ARCHIVO BINARIO (NÓTESE QUE ESTA DEMO YA SE ENTREGA CON UN ARCHIVO BINARIO CON DATOS) 
     ** Los datos que contiene "binario.bin" (de fábrica) son los siguientes:
     *  Persona Nro. 0: santiago
        DNI Nro. 0:     420
     *  Persona Nro. 1: daian
        DNI Nro. 1:     421
     *  Persona Nro. 2: alejandro
        DNI Nro. 2:     100
     *  Persona Nro. 3: mariano
        DNI Nro. 3:     101
    */

    binary = open("binario.bin", "r");
    
    /*while( status && !feof(binary) )      // Mientras el usuario no ponga un cero cómo DNI y no llegue a EOF, el bucle sigue
    {
        status = pre_load(&invitado, &i);   // el usuario carga datos
        save(binary, invitado);             // inmediatamente abro el binario y guardo la info
    }*/
    
    print(binary, i);
    fclose(binary);
}