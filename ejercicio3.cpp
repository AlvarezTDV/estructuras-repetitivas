#include <iostream>
using namespace std;

int main() {
	int numeros, suma;
	suma = 0;
	cout << "Ingrese una cantidad de numeros para luego sumar todos los primeros numeros de este: ";
	cin >> numeros;
	for ( int i = 1; i <= numeros; i++ ) {
		suma = suma + i;
	}
	cout << "La suma de los primeros numeros es: " << suma;
	return 0;
}
