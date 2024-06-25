#include <iostream>
using namespace std;

int main () {
	int numero, intentos,i;
	string verificador;
	cout << "------------------------------------------------------------" << endl;
	cout << "Programa que cuenta los numeros positivos hasta uno negativo" << endl;
	cout << "------------------------------------------------------------" << endl;
	do {
		intentos = 1;
		cout << "Ingresa un numero => ";
		cin >> numero;
		for (i=0;numero>=0;i++) {
			cout << "Ingresa otro numero => ";
			cin >> numero;	
		}
		cout << "------------------------------------------------------------" << endl;
		cout << "Ingreso un numero negativo" << endl;
		cout << "------------------------------------------------------------" << endl;
		cout << "Los intentos fueron: " << i << endl;
		cout << "------------------------------------------------------------" << endl;
		cout << "Desea volver a ingresar numeros (si o no): ";
		cin >> verificador;
		cout << "------------------------------------------------------------" << endl;
	} while ( verificador != "no" );
	cout << "Gracias por usar el programa" << endl;
	cout << "------------------------------------------------------------" << endl;
	return 0;
}
