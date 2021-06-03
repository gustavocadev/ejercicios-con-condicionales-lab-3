#include <iostream>
#include <math.h>
using namespace std;

int main(int argc, char **argv)
{

    /* 
2.- diseñar un algoritmo que me permita ordenar en forma ascendente a tres numeros enteros diferentes
*/

    int number1, number2, number3;
    cout << "ingresa un numero" << endl;
    cin >> number1;
    cout << "ingresa un numero" << endl;
    cin >> number2;
    cout << "ingresa un numero" << endl;
    cin >> number3;

    if (number1 > number2)
    {
        int aux = number1;
        number1 = number2;
        number2 = aux;
    }
    if (number1 > number3)
    {
        int aux = number1;
        number1 = number3;
        number3 = aux;
    }
    if (number2 > number3)
    {
        int aux = number2;
        number2 = number3;
        number3 = aux;
    }
    cout << "en orden ascendente es:" << endl;
    cout << number1 << endl;
    cout << number2 << endl;
    cout << number3 << endl;
    return 0;
}