#include <iostream>
using namespace std;
// Hay que chequear si un string de entrada dice lo mismo del derecho que del revés
bool esPalindromo(string word, int n)
{
    /*  Hago dos selectores. La 'i' es para leer desde el derecho, y la 'j' para leer del revés.
        Así, si las letras que estoy leyendo a la vez del derecho y del revés son las mismas,
        quiere decir que es palíndromo (salvo que en alguna iteración eso no suceda, y ahí
        devolvemos FALSE) */
    int i = 0, j = n-1; 
    while(i < n/2 && j > n/2)
    {
        cout << "word[i]: " << word[i] << endl;
        cout << "word[j]: " << word[j] << endl;
        if( word[i] == word[j] )
        {
            i++;
            j--;
        }
        else
        {
            return false; // Devuelvo false si no se cumple la condición, es decir, cuándo no es palíndromo
        }
    }
    return true; /* Si la palabra es palíndromo, nunca entró al else (y por ende, no salimos antes de la función)
                    Es por eso que puedo poner 'return true;' ahora para devolver que la palabra insertada es
                    palíndromo */
}

int main()
{
    string word = "neuquen";
    int n = 7;
    bool status = esPalindromo(word, n);
    cout << "¿La palabra \"" << word << "\" es palíndromo? " << status << endl;
}