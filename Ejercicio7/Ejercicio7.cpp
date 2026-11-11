/*
Equipo 10:
Alma Leticia Douglas Gonzales Guilbert

Ejercicio 7 c++:
Escribir una función Salario que calcule los salarios de un trabajador para un número 
dado de horas trabajadas y un salario hora. Las horas que su peren las 40 horas semanales 
se pagarán como extras con un salario hora 1,5 veces el salario ordinario.
*/


#include <iostream>
using namespace std;

double Salario(double hrs, double pHrs) {
    if (hrs <= 40) {
        return hrs * pHrs;
    }
    else {
        double extras = hrs - 40;

        return (40 * pHrs) +
            (extras * pHrs * 1.5);
    }
}

int main() {
    double horas, pagoHora;

    cout << "Ingrese las horas trabajadas: ";
    cin >> horas;

    cout << "Ingrese el pago por hora: ";
    cin >> pagoHora;

    if (horas < 0 || pagoHora < 0) {
        cout << "Los valores no pueden ser negativos";
    }
    else {
        cout << "Salario total: "
            << Salario(horas, pagoHora);
    }

    return 0;
}

