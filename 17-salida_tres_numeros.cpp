#include <iostream>
#include <math.h>
using namespace std;

/*
17. Escribir un programa que lea tres enteros de tres dígitos y calcule y visualice la suma y su producto. La salida será justificada a derecha.
*/

int main()
{

    int num1, num2, num3;

    cout << "ingresa el primer numero" << endl;
    cin >> num1;

    cout << "ingresa el segundo numero" << endl;
    cin >> num2;

    cout << "ingresa el tercer numero" << endl;
    cin >> num3;

    if (num1 && num2 && num3)
    {
        int suma = num1 + num2 + num3;
        int producto = num1 * num2 * num3;
        cout << "el producto es: " << producto << endl;
        cout << "la suma es: " << suma << endl;
    }
    else
    {
        cout << "no inserto numeros! >:|" << endl;
    }

    return 0;
}