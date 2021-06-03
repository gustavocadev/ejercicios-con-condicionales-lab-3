#include <iostream>
#include <math.h>
using namespace std;

/*
11. ¿Construir un programa que indique si un número introducido por teclado es positivo, igual a cero, o negativo, utilizar para hacer la selección el operador?
*/

int main(int argc, char **argv)
{

int number;

cout << "ingrese un numero" << endl;
cin >> number;

if(number == 0){
  cout << "el numero es igual 0" << endl;
}
if(number != 0 && number < 0){
  cout << "el numero es negativo" << endl;
}
if(number > 0){ 
  cout << "el numero es positivo" << endl;
}

    return 0;
}