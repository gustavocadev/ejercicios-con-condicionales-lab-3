#include<iostream>
#include<cmath>
using namespace std;

/*6. Dise�e el programa tal, que dados como datos la matr�cula y 
5 calificaciones de un alumno; imprima la matr�cula, el promedio 
y la palabra �aprobado� si el alumno tiene un promedio mayor o 
igual que 11, y la palabra �NO aprobado� en caso contrario.*/

int main(int argv, char** argc) {
	int n1, n2, n3, n4, n5, nm;
	float promocion;
	cout << "inserte su  N� de matricula: " << endl;
	cin >> nm;
	
	cout << "ingrese sus 5 notas: " << endl;
	cin >> n1 >> n2 >> n3 >> n4 >> n5;
	
	promocion = (n1+n2+n3+n4+n5) / 5;
	
	if (promocion>=11) {
		cout << "Numero: " << nm << " usted esta APROBADO" << endl;
	} else {
		cout << "Numero: " << nm << " usted NO esta APROBADO" << endl;
	}
	return 0;
}

