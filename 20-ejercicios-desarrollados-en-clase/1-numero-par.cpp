#include <iostream>
#include <math.h>
using namespace std;

int main(int argc, char **argv)
{
    /*
    1.- Diseñar el algoritmo que me permita determinar si un numero ingresado es par
    */

    cout << "ingresa un numero" << endl;
    int number;
    cin >> number;
    if (number % 2 == 0)
    {
        cout << "el numero es par" << endl;
    }
    else
    {
        cout << "el numero no es par" << endl;
    }
    return 0;
}