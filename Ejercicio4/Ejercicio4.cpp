/*
Equipo 10:
Alma Leticia Douglas Gonzales Guilbert

Ejercicio 4 c++:
Diseñar una función que encuentre el mayor de dos números enteros.
*/

#include <iostream>
using namespace std;

int mayor(int num1, int num2) {
    if (num1 > num2) {
        return num1;
    }
    else {
        return num2;
    }
}

int main() {
    int n1, n2;

    cout << "Ingrese dos numeros: " << endl;
	cout << "Primer numero: ";
    cin >> n1;
	cout << "Segundo numero: ";
	cin >> n2;

    cout << "El mayor es: " << mayor(n1, n2);

    return 0;
}
