#include <iostream>
#include <cmath>
using namespace std;

/*5. Diseñar el programa que permita ingresar dos números, 
luego seleccione un operador (+,-,*,/) y calcule la Operación.*/

int main(int argc, char** argv) {
 int numero1, numero2;

 string signo;

 cout << "ingrese el numero 1" << endl;
 cin >> numero1;
 cout << "ingrese el numero 2" << endl;
 cin >> numero2;

 cout << "ingrese el sigo" << endl;
 cin >> signo;

 if(signo == "+"){
   int suma = numero1 + numero2;
   cout << "la suma es: " << suma << endl;
 }

 if(signo == "-"){
   int resta = numero1 - numero2;
   cout << "la resta es: " << resta << endl;
 }

 if(signo == "*"){
   int producto = numero1 * numero2;
   cout << "el producto es: " << producto << endl;
 }

 if(signo == "/"){
   float cociente = numero1 / numero2;
   cout << "la division es: " << cociente << endl;
 }
	return 0;
}
