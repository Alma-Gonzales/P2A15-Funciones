/*
Equipo 10:
Alma Leticia Douglas Gonzales Guilbert

Ejercicio 6 c++:
Diseñar un procedimiento que acepte un número de mes, un número de día y un número de año y los visualice
en el formato
dd/mm/aa
Por ejemplo, los valores 19,09,1987 se visualizarían como
19/9/87
y para los valores 3, 9 y 1905
3/9/05
*/


#include <iostream>
#include <iomanip>
using namespace std;

void mostrarFecha(int dia, int mes, int year) {
    cout << dia << "/" << mes << "/"
        << setfill('0') << setw(2) << year % 100;
}

int main() {
    int d, m, a;

	cout << "Ingrese la fecha (dia, mes, año): " << endl;
    cout << "Ingrese el dia: ";
    cin >> d;

    cout << "Ingrese el mes: ";
    cin >> m;

    cout << "Ingrese el anio: ";
    cin >> a;

    mostrarFecha(d, m, a);

    return 0;
}
