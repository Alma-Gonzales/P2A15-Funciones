#Equipo 10:
#Alma Leticia Douglas Gonzales Guilbert

#Ejercicio 5 python:
#Diseñar una función que calcule xn para x, variable real y n variable entera



def potencia(x, n):
    return pow(x, n)

x = float(input("Ingrese la base: "))
n = int(input("Ingrese el exponente: "))

if x == 0 and n <= 0:
    print("Potencia no definida")
else:
    print("Resultado:", potencia(x, n))


