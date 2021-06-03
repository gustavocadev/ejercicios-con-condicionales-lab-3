#include <iostream>
#include <math.h>
using namespace std;

int main(int argc, char **argv)
{
    /* 6.- Diseñar el algoritmo que me permita determinar lo siguiente: En una institución la Dirección ordenó aumentar con 2 puntos sobre el promedio final a todo aquel alumno aprobado que haya participado en el desfile institucional y con 3 puntos al alumno desaprobado. De no cumplirse con estas condiciones el promedio permanecerá igual.
*/
    string siono;
    float promedio;

    cout << "ingrese 'SI' si participo o ingrese 'NO' si no participo" << endl;
    cin >> siono;

    cout << "ingresa tu promedio final" << endl;
    cin >> promedio;

    if (siono == "SI" && promedio >= 11)
    {
        promedio += 2;
        cout << "tu promedio final es: " << promedio << endl;
    }
    if (siono == "SI" && promedio < 11)
    {
        promedio += 3;
        cout << "tu promedio final es: " << promedio << endl;
    }
    if (siono == "NO")
    {
        promedio = promedio;
        cout << "tu promedio final es: " << promedio << endl;
    }

    return 0;
}