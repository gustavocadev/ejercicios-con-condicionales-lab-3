#include <iostream>
#include <math.h>
using namespace std;

int main(int argc, char **argv)
{
    /*
4.- Diseñar el programa que permita determinar la cantidad de dinero que recibirá un trabajador por su trabajo. Se considerara el concepto de horas extras, aquellas que superen las 40 horas. Estas se pagaran al doble de una hora normal siempre y cuando NO excedan de 8 y el exceso al triple.
*/
    int horasTrabajadas, pagoPorHora;

    cout << "ingrese las horas trabajadas" << endl;
    cin >> horasTrabajadas; //51

    cout << "ingrese el pago por hora:" << endl;
    cin >> pagoPorHora; // 10

    // creamos una condicion para ver si es mejor a 40 y hacer simplemente una operación directa sin más
    if (horasTrabajadas < 40)
    { //false
        int pago = horasTrabajadas * pagoPorHora;
    }

    //inicializamos una variable de horas extras
    int horasExtras;

    // creamos una condicion si la variable horas trabajadas es mayor y calculamos el modulo (residuo)
    if (horasTrabajadas > 40)
    {
        horasExtras = horasTrabajadas - 40; // 11
    }

    //inicializamos una constante de horas que son sin horas extras
    const int pagoSinHorasExtras = 40 * pagoPorHora; // 400

    // pago doble
    int pagoDoble;
    if (horasExtras <= 8)
    {
        // horasConPagoDoble = horasExtras % 8;
        pagoDoble = pagoSinHorasExtras + ((horasExtras * 2) * pagoPorHora); // 160
        cout << "el pago doble es:" << pagoDoble << endl;
    }

    // pago triple
    int horasConPagoTripe;
    int maximasHorasConPagoDoble = 8;
    if (horasExtras > 8)
    {
        horasConPagoTripe = horasExtras % 8; // 3
        const int pagoTriple = pagoSinHorasExtras + ((maximasHorasConPagoDoble * 2) * pagoPorHora) + ((horasConPagoTripe * 3) * pagoPorHora);
        cout << "el pago triple es:" << pagoTriple << endl;
    }

    return 0;
}