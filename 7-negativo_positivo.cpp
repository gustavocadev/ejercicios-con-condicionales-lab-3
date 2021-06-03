#include<iostream>
using namespace std;

/*7. Diseñe el programa tal que dado como dato un número entero, 
determine e imprima si el mismo es positivo, negativo o nulo.*/

int main(int argc, char** argv){
	int num;
	string text;
	
	cout << "inserte un numero: " << endl;
	cin >> num;
	
	if (num>0) {
		cout << "El numero es POSITIVO" << endl;
	} 
	
	if (num<0) {
		cout << "El numero es NEGATIVO" << endl;
	} 
	if(num == 0){
		cout << "El numero es NULO" << endl;
	}
	
	return 0;
}

