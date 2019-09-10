#include <iostream>

using namespace std;

long double factorial(int nro) {
	if(nro == 1)
		return 1;
	return nro*factorial(nro-1);
}

int main()
{
    cout << "Factorial de 4: " << factorial(4) << endl;
    return 0;
}
