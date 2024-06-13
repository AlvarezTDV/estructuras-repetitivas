#include <iostream>
using namespace std;

int main() {
	int numeros, multiplos;
	cout << "Ingrese una cantidad (positivos) que luego seran los primeros multiplos de 7: ";
	cin >> numeros;
	for ( int i = 1; i <= numeros; i++ ) {
		multiplos = i * 7;
		cout << multiplos << endl;
	}
	return 0;
}
