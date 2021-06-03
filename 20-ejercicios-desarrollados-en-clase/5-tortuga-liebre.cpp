#include <iostream>
#include <math.h>
using namespace std;

int main(int argc, char **argv)
{
    /*
5.- Diseñar el algoritmo que me permita determinar quien esta mas próximo a dar su siguiente vuelta en un tiempo determinado dado en minutos. Una liebre y una Tortuga compiten en una pista circular de 400 mt, la Liebre corre a razón de X mt por segundo y la tortuga corre a razón de Y mt por segundo, Si la Liebre y la Tortuga se encuentran en el mismo punto, parten al mismo tiempo y en el mismo sentido.
*/

    int velocidadTortuga, velocidadLiebre, tiempo;
    cout << "ingrese la velocidad de liebre (m/s)" << endl;
    cin >> velocidadLiebre;
    cout << "ingrese la velocidad de la tortuga (m/s)" << endl;
    cin >> velocidadTortuga;
    cout << "ingrese el tiempo en minutos" << endl;
    cin >> tiempo;

    int convertirMetrosMinutosLiebre = velocidadLiebre * 60;
    int convertirMetrosMinutosTortuga = velocidadTortuga * 60;

    int distanciaRecorridaLiebre = convertirMetrosMinutosLiebre * tiempo;
    int distanciaRecorridaTortuga = convertirMetrosMinutosTortuga * tiempo;

    int distanciaFaltanteRecorridaLiebre = distanciaRecorridaLiebre % 400;
    int distanciaFaltanteRecorridaTortuga = distanciaRecorridaTortuga % 400;

    if (distanciaFaltanteRecorridaLiebre == distanciaFaltanteRecorridaTortuga)
    {
        cout << "es un empate!" << endl;
    }
    if (distanciaFaltanteRecorridaLiebre > distanciaFaltanteRecorridaTortuga)
    {
        cout << "lo que le falta a la liebre es: " << distanciaFaltanteRecorridaLiebre << endl;
    }
    else
    {
        cout << "lo que le falta a la tortuga es: " << distanciaFaltanteRecorridaTortuga << endl;
    }
    return 0;
}