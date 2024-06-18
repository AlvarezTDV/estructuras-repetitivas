#include <iostream>
using namespace std;

int main () {
	int numero, intentos;
	string verificador;
	cout << "------------------------------------------------------------" << endl;
	cout << "Programa que cuenta los numeros positivos hasta uno negativo" << endl;
	cout << "------------------------------------------------------------" << endl;
	do {
		intentos = 1;
		cout << "Ingresa un numero => ";
		cin >> numero;
		while ( numero >= 0 ) {
			cout << "Ingresa otro numero => ";
			cin >> numero;
			intentos++;
		}
		cout << "------------------------------------------------------------" << endl;
		cout << "Ingreso un numero negativo" << endl;
		cout << "------------------------------------------------------------" << endl;
		cout << "Los intentos fueron: " << intentos << endl;
		cout << "------------------------------------------------------------" << endl;
		cout << "Desea volver a ingresar numeros (si o no): ";
		cin >> verificador;
		cout << "------------------------------------------------------------" << endl;
	} while ( verificador != "no" );
	cout << "Gracias por usar el programa" << endl;
	cout << "------------------------------------------------------------" << endl;
	return 0;
}
