#include<iostream>
using namespace std;

/*
8. Diseñe el programa tal, que dado un número entero A; 
determine si el mismo es par, impar o nulo.
*/

int main(int argc, char** argv) {
	int numero;
	cout << "iserte un numero: " << endl;
	cin >> numero;
	
	if (numero == 0) {
		cout << "El numero es NULO" << endl;
	} 
	if(numero != 0){
		 int resto = numero % 2;
		if (resto == 0) {
			cout << "El numero es PAR" << endl;
		} else {
			cout << "El numero es IMPAR" << endl;
		}
	}
	return 0;
}

