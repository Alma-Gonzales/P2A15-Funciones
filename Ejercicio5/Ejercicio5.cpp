/*
Equipo 10:
Alma Leticia Douglas Gonzales Guilbert

Ejercicio 5 c++:
Diseñar una función que calcule xn para x, variable real y n variable entera
*/


#include <iostream>
#include <cmath>
using namespace std;

double potencia(double x, int n) {
    return pow(x, n);
}

int main() {
    double x;
    int n;

    cout << "Ingrese la base: ";
    cin >> x;

    cout << "Ingrese el exponente: ";
    cin >> n;

    if (x == 0 && n <= 0) {
        cout << "Potencia no definida";
    }
    else {
        cout << "Resultado: " << potencia(x, n);
    }

    return 0;
}
