#include <iostream>
#include <math.h>
using namespace std;

/*
4.- Diseñar el algoritmo que me permita determinar si una fecha ingresada es correcta
*/

int main(int argc, char **argv)
{
	int d, m, a;

	cout << "ingrese la fecha1 d/m/a" << endl;
	cin >> d;
	cin >> m;
	cin >> a;
	if (a < 0)
	{
		cout << "la fecha es incorrecta" << endl;
	}
	if (m <= 0 && m > 13)
	{
		cout << "la fecha es incorrecta" << endl;
	}
	if (d <= 0)
	{
		cout << "la fecha es incorrecta" << endl;
	}
	int numeroDeMeses;

	if (m == 4 || m == 6 || m == 9 || m == 11)
	{
		numeroDeMeses = 30;
	}
	if (m == 1 || m == 3 || m == 5 || m == 7 || m == 8 || m == 10 || m == 12)
	{
		numeroDeMeses = 31;
	}

	int bisiesto;
	if (m == 2)
	{
		bisiesto = a % 4;
	}
	if (bisiesto == 0)
	{
		numeroDeMeses = 29;
	}
	else
	{
		numeroDeMeses = 28;
	}

	if (d > numeroDeMeses)
	{
		cout << "el dia es un dia no valido" << endl;
	}
	else
	{
		cout << "la fecha es correcta" << endl;
	}

	return 0;
}