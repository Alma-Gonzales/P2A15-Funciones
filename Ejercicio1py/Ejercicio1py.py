
#Equipo 10: 
#Alma Leticia Douglas Gonzales Guilbert

#Ejercicio 1 python: 
#Diseñar una función que calcule la media de tres números leídos del teclado y poner un ejemplo de su aplicación.

def media(num1, num2, num3):
    return (num1 + num2 + num3) / 3

num1 = float(input("Ingrese el primer numero: "))
num2 = float(input("Ingrese el segundo numero: "))
num3 = float(input("Ingrese el tercer numero: "))

print("La media es: ", media(num1, num2, num3 ))