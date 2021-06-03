#include <iostream>
#include <math.h>
using namespace std;

int main(int argc, char **argv)
{
    /*
2.- En el concierto del grupo de rock SODA STEREO, las ubicaciones se encuentran ordenadas de la siguiente manera: En la parte superior horizontal que corresponde al número de asiento por columna es del 1 al 500. En la parte izquierda vertical que corresponde al número de asiento por filas es del 1 al 50. Diseñar el algoritmo que permita determinar la ubicación que le correspondería a un determinado número de asiento. los boletos tienen una numeración correlativa del 1 al 25,000.
*/
    int numeroBoleto;
    cout << "ingrese el numero de boleto" << endl;
    cin >> numeroBoleto;

    int column = numeroBoleto % 500;
    int row = numeroBoleto / 500;

    if (column == 0)
    {
        column = 500;
    }
    else
    {
        row += 1;
    }

    cout << "la columna es: " << column << endl;
    cout << "la fila es: " << row << endl;

    return 0;
}