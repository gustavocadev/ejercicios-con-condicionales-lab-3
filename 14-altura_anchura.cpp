#include <iostream>
#include <math.h>
using namespace std;

int main()
{

    /*
14. Escribir un programa que solicite al usuario la longitud y anchura de una habitación y, a continuación, visualice su superficie y perímetro. 
*/

    int longitud, anchura;

    cout << "ingrese la longitud" << endl;
    cin >> longitud;

    cout << "ingrese la anchura" << endl;
    cin >> anchura;

    int superficie = anchura * 6;
    int perimetro = (anchura * 6) + longitud;

    cout << "la superficie es: " << superficie << endl;
    cout << "el perimetro es: " << perimetro << endl;

    return 0;
}
