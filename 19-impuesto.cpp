#include <iostream>
#include <math.h>
using namespace std;

int main(int argc, char **argv)
{
    /*
19. Se desea calcular el salario neto semanal de los trabajadores de una empresa de acuerdo a las siguientes normas: 
  Horas Semanales trabajadas < 38 a una tasa dada.
  Horas extras (38 o más) a una tasa de 50 % superior a la ordinaria. 
  Impuestos 0 %, si el salario bruto es menor o igual a 600 soles.
  Impuestos 10 %, si el salario bruto es mayor de 600 soles. 
*/

    int horasTrabajadas, pagoPorHora;
    cout << "ingrese las horas trabajadas" << endl;
    cin >> horasTrabajadas;

    cout << "ingrese el pago por hora" << endl;
    cin >> pagoPorHora;

    const int pagoSinHorasExtra = 38 * pagoPorHora;
    const int horaExtra = horasTrabajadas - 38;

    float pagoFinal;
    float aumento = horaExtra * 0.50;

    if (pagoFinal <= 600 || horasTrabajadas < 38)
    {
        pagoFinal = horasTrabajadas * pagoPorHora;
    }
    if (pagoFinal >= 600 && horasTrabajadas >= 38)
    {
        int pagoDeHoraExtra = pagoPorHora * horaExtra;
        pagoFinal = pagoSinHorasExtra + pagoDeHoraExtra + aumento;

        int impuesto = 0.10 * pagoFinal;
        pagoFinal -= impuesto;
    }

    cout << "el pago final es: " << pagoFinal << endl;

    return 0;
}