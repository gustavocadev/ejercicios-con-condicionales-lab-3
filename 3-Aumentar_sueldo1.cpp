#include <iostream>
#include <cmath>
using namespace std;

/*3. Dado como dato el sueldo de un trabajador, considere un aumento 
del 15% si su sueldo es inferior a $ 1000 y de un 12% en caso contrario.
 Imprima el sueldo con el aumento incorporado. Diseñe el Programa*/

int main(int argv, char** argc) 
{
	int sueldo;
	float aumentarSueldo;
	cout << "inserte su sueldo: " << endl;
	cin >> sueldo;
	
	if (ssueldo < 1000) {
		aumentarSueldo = sueldo + (sueldo * 0.15);
	} else {
		aumentarSueldo = sueldo + (sueldo * 0.12);
	}
	
	cout << "Su sueldo mas el aumento es: " << as << "$" << endl;
	return 0;
}

