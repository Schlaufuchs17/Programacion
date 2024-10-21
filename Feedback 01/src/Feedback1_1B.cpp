#include <iostream>
using namespace std;
int main()
{
	float A, B, C, D, sum, prod; //Numero decimal//
	cout << "Introduce cuatro numeros para obtener la suma de los dos primeros y el producto de los dos ultimos" << endl;
	cout << "Numero 1: ";
	cin >> A;
	cout << "Numero 2: ";
	cin >> B;
	cout << "Numero 3: ";
	cin >> C;
	cout << "Numero 4: ";
	cin >> D;
	sum = A + B;
	prod = C * D;
	cout << "La suma de " << A << "+" << B << "es de: " << sum << endl;
	cout << "El producto de" << C << "+" << D << "es de: " << prod << endl;
return 0;
}