#include<iostream>
#include<cmath>
using namespace std;

/*4. Diseñe el programa tal, que dado como dato el sueldo de un trabajador, calcule 
su aumento según siguiente criterio: SUELDO< $ 1000 AUMENTO 25%, 
$ 1000 < SUELDO < $ 1500 AUMENTO 21% y SUELDO > $ 1500 Imprima el sueldo del Trabajador.*/

int main(int argv, char** argc) {
	float aumentarSueldo;
	int sueldo;
	
	cout << "inserte su sueldo: " << endl;
	cin >> sueldo;
	
	if (sueldo > 1500) {
	aumentarSueldo = sueldo;
	
	} else {
		
	if (1000 < sueldo && sueldo < 1500) {
	aumentarSueldo = sueldo+(sueldo*0.21);
	
	} else {
	aumentarSueldo = sueldo+(sueldo*0.25);
	}
	
	}
	cout << "Su sueldo mas el aumento es: " << aumentarSueldo << "$" << endl;
	return 0;
}

