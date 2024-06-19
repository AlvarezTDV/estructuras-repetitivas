#include <iostream>
using namespace std;
int sumatoria ( int x ){
	int y = 0;
	for ( int i = 1; i <= x; i++ ){
		y = y + i;
	}
	return y;
}

int main() {
	int numeros, suma;
	suma = 0;
	cout << "Ingrese una cantidad de numeros: ";
	cin >> numeros;
	if ( numeros >= 0 ) {
		suma = sumatoria(numeros);
		cout << "La suma de los primeros numeros es: " << suma;
	} else {
		cout << "Ingreso un numero negativo";
	}
	return 0;
}
