#include <iostream>
#include <stdlib.h>
#include <string.h> /*Para las cadenas*/
#include <fstream> /*Para los ficheros*/
using namespace std;

void menu(); /*Tirara de la int main()*/
void crear_contacto();
void agregar_contacto();
void visualizar_contacto();

struct Datos{ /*Define los datos de una persona*/
	string nombre, apellido, telefono; 
}persona;

int main() {
	menu(); /*Llama a la funcion void menu()*/
	system("pause");
	return 0;
}

void menu(){
	int opcion; /*Aqui saldrian las opciones del menu para elegir*/

	do{
		cout<<"\t*** MENU ***"<<endl;
		cout<<"1. Crear contacto (nombre, apellido, telefono)"<<endl;
		cout<<"2. Agregar mas contactos (nombre, apellido, telefono)"<<endl;
		cout<<"3. Visualizar contactos existentes"<<endl;
		cout<<"4. Salir"<<endl;

		cout<<"Eliga una Opcion: "; 
		cin>>opcion; 

		switch(opcion){
		case 1: crear_contacto();
		cout<<"\n"; 
		system("pause");
		break;
		case 2: agregar_contacto();
		cout<<"\n"; 
		system("pause");
		break;
		case 3: visualizar_contacto();
		cout<<"\n"; 
		system("pause");
		break;
		}
		system("cls"); /*Limpia la pantalla de datos*/
	}while(opcion != 4); /*Si la opcion es diferente de 4 se sigue ejecutando*/
}

void crear_contacto(){ 
	ofstream archivo; 
	char respuesta;

	archivo.open("AgendaTelefonos.txt", ios::out);

	if(archivo.fail()){		/*Se comprueba si esta mal (true) o no ha habido errores (false)*/

		cout<<"Lo sentimos, no se pudo crear el archivo.";
		exit(1);
	}

	archivo<<"\t**** Agenda Telefonica ****"<<endl;

	do{		/*Se intrioducen los datos del usuario con do-while*/
		fflush(stdin); 	
		cout<<"Introduzca el nombre: ";		
		getline(cin,persona.nombre);	/*Aqui se guarda el nombre*/
		cout<<"Introduzca el apellido: ";
		getline(cin,persona.apellido);
		cout<<"Introduzca el telefono de contacto: ";
		getline(cin,persona.telefono);

		cout<<endl;

		archivo<<"Nombre: "<<persona.nombre<<endl;
		archivo<<"Apellido: "<<persona.apellido<<endl;
		archivo<<"Telefono de contacto: "<<persona.telefono<<endl<<endl;

		cout<<"¿Añadir otro contacto? (s/n): ";
		cin>>respuesta;
		cout<<endl;
	}while (respuesta == 'S' || respuesta == 's');

	archivo.close(); /*Se cierra el archivo*/
}

void agregar_contacto(){	
	ofstream archivo; 
	char respuesta;

	archivo.open("AgendaTelefonos.txt", ios::app);

	if(archivo.fail()){	

			cout<<"Lo sentimos, no se pudo crear el archivo.";
			exit(1); /*Si sale true (error) sale del programa*/
	}
	do{		
			fflush(stdin); 	
			cout<<"Introduzca el nombre: ";		
			getline(cin,persona.nombre);	
			cout<<"Introduzca el apellido: ";
			getline(cin,persona.apellido);
			cout<<"Introduzca el telefono de contacto: ";
			getline(cin,persona.telefono);

			cout<<endl;

			archivo<<"Nombre: "<<persona.nombre<<endl;
			archivo<<"Apellido: "<<persona.apellido<<endl;
			archivo<<"Telefono de contacto: "<<persona.telefono<<endl<<endl;

			cout<<"¿Añadir otro contacto? (s/n): ";
			cin>>respuesta;
			cout<<endl;

	}while (respuesta == 'S' || respuesta == 's'); /*Mientras se marce S/s se siguen introduciendo datos*/
	archivo.close();
}

void visualizar_contacto(){
	ifstream archivo; 
	string texto; 

	archivo.open("AgendaTelefonos.txt", ios::in);

	if(archivo.fail()){	

				cout<<"Lo sentimos, no se pudo crear el archivo.";
				exit(1); 
		}

	while(!archivo.eof()){  /*Hasta que no sea el final dela rchivo sigue leyendo el texto y copia en la variable*/
		getline(archivo,texto);
		cout<<texto<<endl;
	}
	archivo.close();
}