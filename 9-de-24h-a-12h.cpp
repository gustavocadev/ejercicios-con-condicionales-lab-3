#include <iostream>
#include <cmath>
using namespace std;

/*9. Escribir un programa que lea la hora de un d�a de notaci�n de 24 horas y la respuesta en notaci�n de 12 horas. Por ejemplo, si la entrada es 13:45, la salida ser� 1:45 PM.*/

int main(int argc, char **argv)
{
	int h, hf;
	string hf, mf;
	cout << "inserte la hora: H, M" << endl;
	cin >> h >> m;
	if (h < 13)
	{
		hf = h;
		mf = m;
		cout << "La hora es: " << hf << ":" << mf << " am" << endl;
	}
	else
	{
		hf = h - 12;
		mf = m;
		cout << "La hora es: " << hf << ":" << mf << " pm" << endl;
	}
	return 0;
}
