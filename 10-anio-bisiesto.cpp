#include <iostream>
#include <math.h>
using namespace std;

/*
10.Escribir un programa que determine si un año es bisiesto. Un año es bisiesto si es múltiplo de 4(por ejemplo 1984). Sin embargo, los años múltiplos de 100 sólo son bisiestos cuando a la vez son múltiplos de 400(por ejemplo, 1800 no es bisiesto, mientras que 2000 si lo es). 
*/

int main(int argc, char **argv)
{

  int year;
  cout << "ingrese el anio" << endl;
  cin >> year;
  if (year >= 400 && year % 400 == 0 || year % 4 == 0)
  {
    cout << "el anio: " << year << " es bisiesto" << endl;
  }
  else
  {
    cout << "el anio: " << year << " NO es bisiesto" << endl;
  }
  return 0;
}