#include <iostream>
#include <stdlib.h>
using namespace std;
int main() {
	int numero, factorial = 1;
	do {
		cout << "Introduce un numero positivo para calcular el factorial: "
			cin >> numero;
		if (numero <= 0) {
			cout << "Numero incorrecto" << endl;
		}
	} while (numero <= 0);
	for (int i = 1; i <= numero; i++) {
		factorial = factorial * i;
	}
	cout << "El factorial de " << numero << "es: " << factorial << endl;
	return = 0;
}