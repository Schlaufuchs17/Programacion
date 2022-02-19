/*Disculpa Jose, se me ha estropeado el ordenador y he tenido que hacerlo 
a toda prisa para poder entregarte algo, creo que esta mal en algunos puntos, pero
no se en cuales ya que me ha costado un poco entender esta parte*/
#include <iostream>
#include <coche.h>
#include <parking.h>
#using namespace std;
int main(){
	parking p1();
	p1.setcapacidad(100);
	p1.setocupadas(98);

	coche car1("1234ABC");
	coche car2("2345DEF");
	coche car3("5678GHI");

	car1.solicitarentrada();
	car2.solictarentrada();
	car3.solictarentrada();

	car1.solictarsalida();
	car2.solcitarsalida();
	car3.solicitarsalida();

	return 0;
}