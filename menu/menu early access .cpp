#include <iostream>
#include <time.h>
#include <string>
using namespace std;	
int a = 0;
char primer[10];
char segundo[10];
char appaterno[10];
char apmaterno[10];



void lista() {

	system("cls");
	cout << "Lista de alumnos regristrados\n\n" << appaterno<<" "<<apmaterno<<" "<<primer<<" "<<segundo;
	

	system("pause > nul");


}
void registrar() {
	
	system("cls");

	cout << "Resgristrar un alumno nuevo\n\n";
	cout << "Introdusca apellido paterno\n";
		cin >> appaterno;
	cout << "Introdusca apellido materno\n";
		cin >> apmaterno;
	cout << "Primer nombre\n";
		cin >> primer;
	cout << "Segundo nombre(encaso de no terner deje esta linea en blanco)\n";
		cin >> segundo;
	
	

}

int main() {
	locale::global(locale("spanish"));
	do {
		system("cls");
		cout << "MENU\n\n(1)Ver lista de alumnos\n(2)Registrar un alumno nuevo\n(3)Editar un alumno existente\n(4)Borrar un alumno\n(5)Salir\n";

		cin >> a;

		switch (a) {

		case 1: lista();
			break;
		case 2: registrar();
			break;
		}


		
	} while (a < 5);
	
	return 0;
}
