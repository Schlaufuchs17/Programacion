#include <iostream>
#include <string>
#include <parking.h>
using namespace std;

parking::parking() {
}
parking::parking(int capacidad, int ocupadas) {
	this->capacidad = capacidad;
	this->ocupadas = ocupadas;
}
parking::~parking() {
}
void parking::setcapacidad(int capacidad) {
	this->capacidad = capacidad;
}
void parking::setocupadas(int ocupadas¨) {
	this->ocupadas = ocupadas;
}
void parking::solicitudentrada() {
		cout << "Plazas disponibles: " << getcapacidad() - getocupadas() << endl;
		if (getocupadas() < getcapacidad()) {
			cout << "Gracias por usar el parking" << endl;
			aumentarocupadas();
		else {
			cout << "Parking lleno" << endl;
		}
}
}
void parking::solicitarsalida() {
	cout << "Gracias por su visita" << endl;
	disminuirocupadas();
}
void parking::disminiurocupadas() {
	ocupadas--;
}
void parking::aumentarocupadas() {
	ocupadas++;
}
int parking::getcapacidad() {
	return capacidad;
}
int parking::getocupadas() {
	return ocupadas;;
}