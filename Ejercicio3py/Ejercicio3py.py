#Equipo 10: 
#Alma Leticia Douglas Gonzales Guilbert

#Ejercicio 3 python:
#Diseñar un algoritmo para calcular el máximo común divisor de cuatro números basado en un 
#subalgoritmo función mcd (máximo común divisor de dos números).

def mcd(num1, num2):
    while num2 != 0:
        num1, num2 = num2, num1 % num2
    
    return abs(num1)

num1 = int(input("Primer numero: "))
num2 = int(input("Segundo numero:"))
num3 = int(input("Tercer numero: "))
num4 = int(input("Cuarto numero: "))

resultado = mcd(mcd(mcd(num1, num2), num3), num4)

print("El MCD es:", resultado)
