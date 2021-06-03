#include <iostream>
#include <math.h>
using namespace std;

int main(int argc, char **argv)
{
    /*
13. Escribir un programa que lea tres números y nos escriba el mayor y el menor. 
*/

    int num1, num2, num3;

    cout << "ingrese el numero 1" << endl;
    cin >> num1;

    cout << "ingrese el numero 2" << endl;
    cin >> num2;

    cout << "ingrese el numero 3" << endl;
    cin >> num3;

    int mayor = num1;

    if (mayor < num2)
    {
        mayor = num2;
    }
    if (mayor < num3)
    {
        mayor = num3;
    }

    int menor = num2;

    if (menor > num1)
    {
        menor = num1;
    }
    if (menor > num3)
    {
        menor = num3;
    }

    cout << "el numero mayor es: " << mayor << endl;
    cout << "el numero menor es: " << menor << endl;

    return 0;
}