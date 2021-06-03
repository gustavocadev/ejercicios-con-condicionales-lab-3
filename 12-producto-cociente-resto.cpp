#include <iostream>
#include <math.h>
using namespace std;
/*
12.- Escribir un programa que lea dos enteros y calcule e imprima su producto, cociente y el resto cuando el primero se divide por el segundo.
*/

int main(int argc, char **argv)
{

    int num1, num2;
    cout << "ingrese el numero 1" << endl;
    cin >> num1;

    cout << "ingrese el numero2" << endl;
    cin >> num2;

    if (num1 != 0 && num2 != 0)
    {
        int producto = num1 * num2;
        int cociente = num1 / num2;
        int resto = num1 % num2;

        cout << "el producto es: " << producto << endl;
        cout << "el producto es: " << cociente << endl;
        cout << "el resto es: " << resto << endl;
    }

    return 0;
}