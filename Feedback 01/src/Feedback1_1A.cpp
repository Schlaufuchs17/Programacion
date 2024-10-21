#include <iostream>		//Para introducir datos por teclado//
using namespace std;	//Da acceso a los nombres del sistema (librer�a est�ndar). Sustituye a std::cout en cada l�nea//
						//Si va a  haber varios namespace es mejor no poner ninguno y usar cada vez "std:cout"//
int main()	//Aqu� se ejecuta todo el programa. Funci�n principal//
{
	float precio, total;	//N�mero decimal//
	int cantidad;	//N�mero entero//
		do { //Precio//
			cout << "Precio del art�culo: ";	//Sale por la consola//
			cin >> precio;	//Lo que introducimos//
			if (precio <= 0) {
				cout << "Precio incorrecto, m�rquelo de nuevo" << endl; //Endl es un salto de l�nea//
			}
		} while (precio <= 0);
		do { //Cantidad//
			cout << "Cantidad de productos:";
			cin >> cantidad;
			if (cantidad <= 0) {
				cout << "Cantidad incorrecta, m�rquela de nuevo" << endl;
			}
		} while (cantidad <= 0);
		total = precio * cantidad;
		cout << "El precio total es:" << total << endl;
	return 0;
}