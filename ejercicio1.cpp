#include <iostream>
using namespace std;

int main() {
	int numeros, multiplos;
	cout << "Ingrese una cantidad (positivos) que luego seran los primeros multiplos de 7: ";
	cin >> numeros;
	if ( numeros > 0 ) {
		for ( int i = 1; i <= numeros; i++ ) {
			multiplos = i * 7;
			cout << multiplos << endl;
		}
	} else {
		cout << "Ingreso un numero negativo" << endl;
	}
	return 0;
}
