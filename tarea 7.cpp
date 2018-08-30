#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std; 

int main() {
	
	locale::global(locale("spanish"));
	
	cout << "Juego de piedra papel y tijeras \n\n\n";
	
	cout << "Escoge (1) para piedra \nEscoge (2) para papel \nEscoge (3) para tijeras \n";
	
	int a=0,b=0;
	
	cin >> a;
	
	b = rand() % 3 + 1;
	
	switch (a)
	{
	case 1: if (b = 1) {
				cout << "CPU Escojio piedra \nEmpate";
				}
			else if(b = 2) {
				cout << "CPU Escojio papel \nPerdiste";
	
				}
			else { cout << "CPU Escojio tijeras \nGanste"; }

			break;

		case 2:if (b = 1) {
			     	cout << "CPU Escojio piedra \nGanaste";
				}
			  else if(b = 2) {
				   cout << "CPU Escojio papel \nEmpate";

			   }
			  else { cout << "CPU Escojio tijeras \nPerdiste"; }
			 
			   break;

		case 3:if (b = 1) {
					cout << "CPU Escojio piedra \nPerdiste";
				}
			    else if(b = 2) {
				   cout << "CPU Escojio papel \nGanaste";

			   }
				else { cout << "CPU Escojio tijeras \nEmpate";}

			   break;
		default: cout << "escoje una opcion valida\n";
	}
		

	system("pause > nul");

	return 0;
}