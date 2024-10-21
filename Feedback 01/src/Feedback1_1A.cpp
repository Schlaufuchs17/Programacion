#include <iostream>		//Para introducir datos por teclado//
using namespace std;	//Da acceso a los nombres del sistema (librería estándar). Sustituye a std::cout en cada línea//
						//Si va a  haber varios namespace es mejor no poner ninguno y usar cada vez "std:cout"//
int main()	//Aquí se ejecuta todo el programa. Función principal//
{
	float precio, total;	//Número decimal//
	int cantidad;	//Número entero//
		do { //Precio//
			cout << "Precio del artículo: ";	//Sale por la consola//
			cin >> precio;	//Lo que introducimos//
			if (precio <= 0) {
				cout << "Precio incorrecto, márquelo de nuevo" << endl; //Endl es un salto de línea//
			}
		} while (precio <= 0);
		do { //Cantidad//
			cout << "Cantidad de productos:";
			cin >> cantidad;
			if (cantidad <= 0) {
				cout << "Cantidad incorrecta, márquela de nuevo" << endl;
			}
		} while (cantidad <= 0);
		total = precio * cantidad;
		cout << "El precio total es:" << total << endl;
	return 0;
}