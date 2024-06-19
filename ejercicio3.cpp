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
	bool verificador = false;
	suma = 0;
	cout << "--------------------------------------------------" << endl;
	cout << "    Programa para sumar los n primeros numeros    " << endl;
	cout << "--------------------------------------------------" << endl;
	do {
		cout << "Ingrese una cantidad de numeros => ";
		cin >> numeros;
		cout << "--------------------------------------------------" << endl;
		if ( numeros >= 0 ) {
			suma = sumatoria(numeros);
			cout << "La suma de los " << numeros << " primeros numeros es => " << suma << endl;
			cout << "--------------------------------------------------" << endl;
			verificador = true;
		} else {
			cout << "        ERROR: Ingreso un numero negativo         " << endl;
			cout << "              Vuelva a intentarlo                 " << endl;
			cout << "--------------------------------------------------" << endl;
		}
	} while ( verificador != true );
	cout << "          Gracias por usar el programa            " << endl;
	cout << "--------------------------------------------------" << endl;
	return 0;
}
