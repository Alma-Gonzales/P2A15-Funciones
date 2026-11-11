/*
Equipo 10:
Alma Leticia Douglas Gonzales Guilbert

Ejercicio 8 c++:
Diseñar un algoritmo que transforme un número introducido por teclado en notación decimal a notación romana. 
El número será entero positivo y no excederá de 3.000.
*/


#include <iostream>
#include <string>
using namespace std;

string romano(int numero) {
    int valores[] = {
        1000, 900, 500, 400,
        100, 90, 50, 40,
        10, 9, 5, 4, 1
    };

    string simbolos[] = {
        "M", "CM", "D", "CD",
        "C", "XC", "L", "XL",
        "X", "IX", "V", "IV", "I"
    };

    string resultado = "";

    for (int i = 0; i < 13; i++) {
        while (numero >= valores[i]) {
            resultado += simbolos[i];
            numero -= valores[i];
        }
    }

    return resultado;
}

int main() {
    int numero;

    cout << "Ingrese un numero entre 1 y 3000: ";
    cin >> numero;

    if (numero >= 1 && numero <= 3000) {
        cout << "Numero romano: " << romano(numero);
    }
    else {
        cout << "Numero fuera del rango";
    }

    return 0;
}
