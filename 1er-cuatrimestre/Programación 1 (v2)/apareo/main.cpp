#include <iostream>
using namespace std;

void apareo(int vecA[], int vecB[], int vecFinal[], int nA, int nB)
{
    int i = 0, j = 0, c = 0;
    while(c < nA+nB)
    {
        if(vecA[i] < vecB[j])
        {
            //cout << "vecA[" << i << "] es menor" << endl;
            vecFinal[c] = vecA[i];
            i++;
        } else
        {
            //cout << "vecB[" << j << "] es menor" << endl;
            vecFinal[c] = vecB[j];
            j++;
        }
        cout << "vecFinal[" << c << "] es: " << vecFinal[c] << endl;
        c++;
    }
}

int main()
{
    int n1 = 5;
    int n2 = 4;
    int vecA[n1] = {1, 4, 6, 7, 8};
    int vecB[n2] = {2, 3, 5, 10};
    int vecFinal[n1+n2] = {0};
    apareo(vecA, vecB, vecFinal, n1, n2);
}