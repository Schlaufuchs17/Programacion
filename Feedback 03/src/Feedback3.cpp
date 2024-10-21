#include <iostream>
#include <string.h>
#include <stdlib.h>
using namespace std;

int main() {
	int numero = 10;
	string palabras[numero];
	string auxiliar;

	for (int i = 0; i < num; i++) {
		cout << "Selecciona la palabra:   " << endl;
		cin >> palabras[i]; /*Introducimos la palbara a la que daremos la vuelta*/
	}

	for (int i = 0; i < numero; i++) {
		for (int j = i + 1; j < numero; j++) {
			if (palabras[i] > palabras[j]) {
				auxiliar = palabras[j]; /*Aqui ponemos la palabra que queremos cambiar por otra*/
				palabras[j] = palabras[i]; /*Si cambiamos J de sentido, se convierte en I, 
										   que sera el que almacene antes de repetir el bucle*/
				palabras[i] = auxiliar; /*Vuelve a ejecutarse el bucle pero con I*/
			}
		}
	}
	cout << endl;

	for (int i = 0; i < numero; i++) {
		cout << palabras[i] << endl;
	}

	return 0;
}