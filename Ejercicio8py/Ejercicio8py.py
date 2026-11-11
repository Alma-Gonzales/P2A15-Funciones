#Equipo 10:
#Alma Leticia Douglas Gonzales Guilbert

#Ejercicio 8 python:
#Diseñar un algoritmo que transforme un número introducido por teclado en notación decimal a notación romana. 
#El número será entero positivo y no excederá de 3.000.


def romano(numero):
    valores = [
        1000, 900, 500, 400,
        100, 90, 50, 40,
        10, 9, 5, 4, 1
    ]

    simbolos = [
        "M", "CM", "D", "CD",
        "C", "XC", "L", "XL",
        "X", "IX", "V", "IV", "I"
    ]

    resultado = ""

    for i in range(len(valores)):
        while numero >= valores[i]:
            resultado += simbolos[i]
            numero -= valores[i]

    return resultado

numero = int(input("Ingrese un numero entre 1 y 3000: "))

if 1 <= numero <= 3000:
    print("Numero romano:", romano(numero))
else:
    print("Numero fuera del rango")
