#Equipo 10:
#Alma Leticia Douglas Gonzales Guilbert

#Ejercicio 4 python:
#Diseñar una función que encuentre el mayor de dos números enteros.


def mayor(num1, num2):
    if num1 > num2:
        return num1
    else:
        return num2

num1 = int(input("Primer numero: "))
num2 = int(input("Segundo numero: "))

print("El mayor es:", mayor(num1, num2))

