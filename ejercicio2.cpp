#include <iostream>
using namespace std;

int main () {
	int numero;
	cout << "Ingresa un numero: ";
	cin >> numero;
	while ( numero >= 0 ) {
		cout << "Ingresa otro numero: ";
		cin >> numero;
	}
	cout << "Ingreso un numero negativo";
	return 0;
}
