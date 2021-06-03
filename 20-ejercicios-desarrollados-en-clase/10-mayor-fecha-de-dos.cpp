#include <iostream>
#include <math.h>
using namespace std;

/*
3.- Diseñar el algoritmo que me permita determinar la fecha mayor de dos fechas diferentes .
*/

int main(int argc, char **argv)
{
    int d1, m1, a1;
    int d2, m2, a2;

    cout << "ingrese la fecha1 d/m/a" << endl;
    cin >> d1;
    cin >> m1;
    cin >> a1;

    cout << "ingrese la fecha2 d/m/a" << endl;
    cin >> d2;
    cin >> m2;
    cin >> a2;

    int diaMayor;
    int mesMayor;
    int anioMayor;

    if (a1 > a2)
    {
        diaMayor = d1;
        mesMayor = m1;
        anioMayor = a1;
    }
    if (a2 > a1)
    {
        diaMayor = d2;
        mesMayor = m2;
        anioMayor = a2;
    }
    if (m1 > m2)
    {
        diaMayor = d1;
        mesMayor = m1;
        anioMayor = a1;
    }
    if (m2 > m1)
    {
        diaMayor = d2;
        mesMayor = m2;
        anioMayor = a2;
    }
    if (d1 > d2)
    {
        diaMayor = d1;
        mesMayor = m1;
        anioMayor = a1;
    }

    if (d2 > d1)
    {
        diaMayor = d2;
        mesMayor = m2;
        anioMayor = a2;
    }

    cout << "la fecha mayor es: " << diaMayor << "/" << mesMayor << "/" << anioMayor << endl;

    return 0;
}