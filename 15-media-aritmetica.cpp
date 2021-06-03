#include <iostream>
#include <math.h>
using namespace std;
/*
15. Escribir un programa que lea cuatro números y calcule la media aritmética.
*/
int main(int argc, char **argv)
{
    float n1, n2, n3, n4;
    cout << "ingrese los numeros" << endl;
    cin >> n1;
    cin >> n2;
    cin >> n3;
    cin >> n4;

    float media = (n1 + n2 + n3 + n4) / 4;

    if (media <= 0)
    {
        cout << "no hay solucion" << endl;
    }
    else
    {
        cout << "la media aritmetica es: " << media << endl;
    }

    return 0;
}