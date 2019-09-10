#include <iostream>
#include <string>

using namespace std;

// Tenemos un string de entrada (una palabra) y hay que convertir todos los caracteres a mayúscula

void test()
{
    int character = 'a';
    cout << character << endl; // Esto imprime '97', posición del carácter 'a' en la tabla ASCII
}

string toUpperCase(string word, int n)
{
    char dictionary[26] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'M', 'N', 'L', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'};
    int asciiCodes[n] = {0};
    string result = "";
    for(int i = 0;i < n;i++)
    {
        asciiCodes[i] = word[i] - 97; // Le resto 97 porque es el valor de la letra 'a' en la tabla ASCII. Así, la 'a' coincide con la 'A' de mi vector de chars :D
        result[i] = dictionary[asciiCodes[i]];
        cout << "Código ASCII - 97 = " << asciiCodes[i] << endl;
        cout << "Letra encontrada: " << result[i] << endl << endl;
    }
    return result;
}

int main()
{
    const int n = 4;
    string word = "pepe";
    string result = toUpperCase(word, n);
    
    cout << "La palabra fue convertida a mayúsculas: ";
    for(int i = 0;i < n;i++) 
        cout << result[i]; // Imprimo celda por celda, extrañamente no puedo imprimir si hago 'cout << result' (no imprime nada) :O
}