#include <iostream>
#include <math.h>
using namespace std;

/*
5.- Diseñar el algoritmo que me permita determinar el día anterior a una fecha ingresada.
*/

int main(int argc, char **argv)
{

    int d, m, a;

    cout << "ingrese la fecha d/m/a" << endl;
    cin >> d;
    cin >> m;
    cin >> a;

    int diaAnterior = d;
    int mesAnterior = m;
    int anioAnterior = a;

    if (m == 1 && d == 1)
    {
        diaAnterior = 31;
        mesAnterior = 12;
        anioAnterior = a - 1;
    }

    int bisiesto;
    if (d == 1 && m == 3)
    {
        bisiesto = a % 4;
        mesAnterior = m - 1;
    }
    if (bisiesto == 0 && mesAnterior == 2)
    {
        diaAnterior = 29;
    }
    else
    {
        diaAnterior = 28;
    }

    if (d == 1 && (m == 4 || m == 6 || m == 9 || m == 11))
    {
        mesAnterior = m - 1;
        diaAnterior = 30;
    }
    if (d == 1 && (m == 5 || m == 7 || m == 8 || m == 10 || m == 12))
    {
        mesAnterior = m - 1;
        diaAnterior = 31;
    }

    if (d > 1)
    {
        diaAnterior = d - 1;
    }

    if (m == 2 && d == 1)
    {
        diaAnterior = 31;
        mesAnterior = m - 1;
    }

    cout << "El dia anterior es: " << diaAnterior << " / " << mesAnterior << " / " << anioAnterior << endl;

    return 0;
}