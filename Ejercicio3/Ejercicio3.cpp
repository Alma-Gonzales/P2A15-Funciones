/*
Equipo 10:
Alma Leticia Douglas Gonzales Guilbert

Ejercicio 3 c++:
Diseñar un algoritmo para calcular el máximo común divisor de cuatro números basado en un 
subalgoritmo función mcd (máximo común divisor de dos números).
*/

#include<iostream>
using namespace std;

int mcd(int num1, int num2) {
	while (num2 != 0) {
		int res = num1 % num2;
		num1 = num2;
		num2 = res;
	}
	return num1 < 0 ? -num1 : num1;
}

int main() {
	int a, b, c, d;

	cout << "Ingrese cuatro numeros" << endl;

	cout << "Primer numero: ";
	cin >> a;
    cout << "Segundo numero: ";
	cin >> b;
	cout << "Tercer numero: ";
	cin >> c;
	cout << "Cuarto numero: ";
	cin >> d;

	int resultado = mcd(mcd(mcd(a, b), c), d);

	cout << " El Maximo comun divisor es: " << resultado;

	return 0;
}