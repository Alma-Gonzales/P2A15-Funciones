/*
Equipo 10:
Alma Leticia Douglas Gonzales Guilbert

Ejercicio 2 c++:
Diseñar la función FACTORIAL que calcule el factorial de un número entero en el rango 100 a 1.000.000.
*/


#include <iostream>
#include <vector>
using namespace std;

int FACTORIAL(int n1) {
    vector<int> resultado(1, 1);

    for (int i = 2; i <= n1; i++) {
        int acarreo = 0;

        for (int j = 0; j < (int)resultado.size(); j++) {
            int producto = resultado[j] * i + acarreo;

            resultado[j] = producto % 10;
            acarreo = producto / 10;
        }

        while (acarreo > 0) {
            resultado.push_back(acarreo % 10);
            acarreo /= 10;
        }
    }

    return (int)resultado.size();
}

int main() {
    int n1;

    cout << "Ingrese un numero entre 100 y 1000000: ";
    cin >> n1;

    if (n1 >= 100 && n1 <= 1000000) {
        cout << "Factorial calculado" << endl;
        cout << "Cantidad de digitos: " << FACTORIAL(n1);
    }
    else {
        cout << "Numero fuera del rango";
    }

    return 0;
}