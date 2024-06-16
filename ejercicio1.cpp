#include <iostream>
using namespace std;

int main() {
	int numeros, multiplos;
	bool verificador = false;
	cout << "---------------------------------------" << endl;
	cout << "Programa para calcular n multiplos de 7" << endl;
	cout << "---------------------------------------" << endl;
	do {
		cout << "Ingrese una cantidad positiva: ";
		cin >> numeros;
		cout << "---------------------------------------" << endl;
		if ( numeros > 0 ) {
			for ( int i = 1; i <= numeros; i++ ) {
				multiplos = i * 7;
				cout << "Multiplo nro " << i << ": " << multiplos << endl;
			}
			verificador = true;
		} else {
			cout << "Ingreso un numero invalido" << endl;
			cout << "---------------------------------------" << endl;
		}
	} while ( verificador != true );
	cout << "---------------------------------------" << endl;
	cout << "Gracias por usar el programa :)" << endl;
	cout << "---------------------------------------" << endl;
	return 0;
}
