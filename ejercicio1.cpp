#include <iostream>
using namespace std;

int main() {
	int numeros, multiplos;
	bool verificador = false;
	do {
		cout << "Ingrese una cantidad (positivos) que luego seran los primeros multiplos de 7: ";
		cin >> numeros;
		if ( numeros > 0 ) {
			for ( int i = 1; i <= numeros; i++ ) {
				multiplos = i * 7;
				cout << "Multiplo nro " << i << ": " << multiplos << endl;
			}
			verificador = true;
		} else {
			cout << "Ingreso un numero negativo" << endl;
		}
	} while ( verificador != true );
	return 0;
}
