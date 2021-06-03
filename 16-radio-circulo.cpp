#include <iostream>
#include <math.h>
using namespace std;

/*
16. Escribir un programa que lea el radio de un círculo y calcule su área, así como la longitud de la circunferencia de ese radio.
*/

int main(int argc, char **argv)
{

    int radio;

    cout << "ingrese el radio" << endl;
    cin >> radio;

    const float PI = 3.141592;

    float area = PI * pow(radio, 2);

    if (radio == 0)
    {
        cout << "el radio no puede ser 0" << endl;
    }
    else
    {
        cout << "la respuesta es: " << area << endl;
    }

    return 0;
}