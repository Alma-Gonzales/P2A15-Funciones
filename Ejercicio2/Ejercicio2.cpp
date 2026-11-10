/*
Equipo 10:
Alma Leticia Douglas Gonzales Guilbert

Ejercicio 2 c++: 
Diseñar la función FACTORIAL que calcule el factorial de un número entero en el rango 100 a 1.000.000.
*/

#include<iostream>
#include<vector>
using namespace std;

void FACTORIAL(int num) {
	vector<int> resultado(1, 1);

	for (int i = 2; i <= num; i++) {
		int a = 0;

		for (int j = 0; j < resultado.size(); j++) {
			int producto = resultado[j] * i + a;

			resultado[j] = producto % 10;
			a = producto / 10;
		}
		while (a > 0) {
			resultado.push_back(a % 10);
			a /= 10;
		}
	}

	cout << "El factorial de " << num << " es: ";

	for (int i = (int)resultado.size() - 1; i >= 0; i--) {
		cout << resultado[i];
	}
}

int main() {

	int n1;

	cout << "Ingrese un numero entre 100 y 1000000: ";
	cin >> n1;

	if (n1 >= 100 && n1 <= 1000000) {
		FACTORIAL(n1);
	}
	else {
		cout << "Numero fuera del rango";
	}

	return 0; 
}
