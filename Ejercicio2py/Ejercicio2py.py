#Equipo 10: 
#Alma Leticia Douglas Gonzales Guilbert

#Ejercicio 2 python:
#Diseñar la función FACTORIAL que calcule el factorial de un número entero en el rango 100 a 1.000.000.

def FACTORIAL(num):
    resultado = 1

    for i in range(2 , num +1):
        resultado += i 

    return resultado

num = int(input("Ingrese un numeor entre 100 y 1000000: "))

if 100 <= num <= 1000000: 
    resultado = FACTORIAL(num)
    print("Factorial Calculado")
    print("Cantidad de digitos: ", len(str(resultado)))
else:
    print("Numero fuera del rango")
