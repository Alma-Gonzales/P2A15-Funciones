/*
Equipo 10: 
Alma Leticia Douglas Gonzales Guilbert

Ejercicio 1 c++: 
Diseñar una función que calcule la media de tres números leídos del teclado y poner un ejemplo de su aplicación.
*/

#include<iostream>
using namespace std;

float media(float num1, float num2, float num3) {
	return (num1 + num2 + num3) / 3;
}

int main() {

	float num1, num2, num3;

	cout << "Ingrese tres numeros" << endl;

	cout << "Primer numero: ";
	cin >> num1;

	cout << "Segundo numero: ";
	cin >> num2;

	cout << "Tercer numero: ";
	cin >> num3;
	
	cout << "La media es:  " << media(num1, num2, num3) << endl; 

	return 0; 
}