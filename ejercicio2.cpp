#include <iostream>
using namespace std;

int main () {
	int numero, intentos;
	string verificador;
	do {
		intentos = 1;
		cout << "Ingresa un numero: ";
		cin >> numero;
		while ( numero >= 0 ) {
			cout << "Ingresa otro numero: ";
			cin >> numero;
			intentos++;
		}
		cout << "Ingreso un numero negativo" << endl << "Los intentos fueron: " << intentos << endl;
		cout << "¿Desea volver a ingresar numeros? (si o no): ";
		cin >> verificador;
	} while ( verificador != "no" );
	return 0;
}
