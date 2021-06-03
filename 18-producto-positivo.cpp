#include <iostream>
#include <math.h>
using namespace std;
/*
18. Escribir un programa que lea tres números y si el tercero es positivo calcule y escriba la suma de los tres números, y si es negativo calcule y escriba su producto.
*/
int main(int argc, char **argv)
{

    int n1, n2, n3;

    cout << "ingrese los 3 numeros" << endl;
    cin >> n1;
    cin >> n2;
    cin >> n3;

    if (n3 > 0)
    {
        int suma = n1 + n2 + n3;
        cout << "la suma es: " << suma << endl;
    }

    if (n3 < 0)
    {
        int producto = n1 * n2 * n3;
        cout << "el producto es: " << producto << endl;
    }

    return 0;
}