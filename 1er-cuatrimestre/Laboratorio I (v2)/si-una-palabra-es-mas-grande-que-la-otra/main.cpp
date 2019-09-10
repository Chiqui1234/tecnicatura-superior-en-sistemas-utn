#include <iostream>
using namespace std;
#define CANTPALABRAS 2
/*  Hay que determinar la N y M de dos palabras distintas y decir cuál es
    más larga. */
int wordLenght(string word)
{
    int puntero = 0;
    while(word[puntero] != 0)
    {
        puntero++;
    }
    return puntero;
}
int main()
{
    string word[CANTPALABRAS];
    int counter[CANTPALABRAS];
    for(int i = 0;i < CANTPALABRAS;i++) // Acá el usuario escribe 'CANTPALABRAS' veces
    {
        cout << "Palabra " << i+1 << ": ";
        cin >> word[i];
        counter[i] = wordLenght(word[i]); // Cuento los caracteres de la palabra digitada
    }
    
    if(counter[0] == counter[1]) // Acá hago bellas comparaciones <3
    {
        cout << "Las palabras \"" << word[0] << "\" y \"" << word[1] << "\" tienen la misma cantidad de caracteres." << endl;
    }
    else if (counter[0] > counter[1])
    {
        cout << "La palabra \"" << word[0] << "\" es más larga." << endl;
    }
    else
    {
        cout << "La palabra \"" << word[1] << "\" es más larga." << endl;
    }
    
    
}