//escribir un programa que encuentre los 3 primeros numeros pefectos pares.
//un nro es perfecto cuando la suma de todos los divisores son iguales a ese numero.
#include <iostream>

using namespace std;

int main()
{

    int num=0;
    int generador_par=1;
    int cont_par=0;
    int cant=0;




    while (cant<3){
    (num=num+2);
    int sumatoria=0;

    for (int i=1;i<num; i++){
    if (num% i==0){
    sumatoria+=i;
    if (sumatoria==num){
    cant++;
    cout<<"los numeros perfectos son"<<sumatoria<<endl;
    }

    }//cierre if

    }//cierra for

    }//CIERRE WHILE





    return 0;
}