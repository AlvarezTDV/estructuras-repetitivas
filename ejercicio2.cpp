#include <iostream>
using namespace std;

int main () {
	int numero, intentos;
	intentos = 1;
	cout << "Ingresa un numero: ";
	cin >> numero;
	while ( numero >= 0 ) {
		cout << "Ingresa otro numero: ";
		cin >> numero;
		intentos++;
	}
	cout << "Ingreso un numero negativo" << endl << "Los intentos fueron: " << intentos;
	return 0;
}
