#include <iostream>
#include <math.h>

/*2. Las ra�ces reales de la expresi�n 
ax�+bx+c = 0 se obtiene a trav�s de la f�rmula:
Dise�e el programa que permita calcular las 
ra�ces de una ecuaci�n de segundo grado.*/

using namespace std;

int main(int argc, char** argv) {
	int a, b, c, D;
	float x1, x2;
	
	cout<<"ingresen los coeficientes de la ecuacion: A,B,C"<<endl;
	cout<<"A=";
	cin>>a;
	
	cout<<"B=";
	cin>>b;
	
	cout<<"C=";
	cin>>c;
	
	D=(pow(b,2)- (4*a*c));
	if (D>=0){
		
		x1 = (-b + pow (D, 0.5)) / (2 * a);
		x2 = (-b - pow (D, 0.5)) / (2 * a);
		
		cout << "x1: "<< x1 <<endl;
		cout << "x2: "<< x2 <<endl;
		
		}else{
		cout<<"no tiene solucion conocida";
		}
	
	return 0;
}

