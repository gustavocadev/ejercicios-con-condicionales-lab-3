#include <iostream>
#include <math.h>
using namespace std;

int main(int argc, char **argv)
{
    /*
7.- Diseñar el algoritmo que me permita determinar el mayor y el menor de tres números enteros diferentes. Sin ordenar 
*/

    int number1, number2, number3;
    cout << "ingresa el primer numero" << endl;
    cin >> number1;

    cout << "ingresa el segundo numero" << endl;
    cin >> number2;

    cout << "ingresa el tercer numero" << endl;
    cin >> number3;

    int larger = number1;

    if (larger < number2)
    {

        larger = number2;
    }
    if (larger < number3)
    {
        larger = number3;
    }

    int smaller = number2;

    if (smaller > number1)
    {
        smaller = number1;
    }
    if (smaller > number3)
    {
        smaller = number3;
    }

    cout << "el numero mayor es: " << larger << endl;
    cout << "el numero menor es: " << smaller << endl;

    return 0;
}