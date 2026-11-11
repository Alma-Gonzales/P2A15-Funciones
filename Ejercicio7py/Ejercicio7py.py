#Equipo 10:
#Alma Leticia Douglas Gonzales Guilbert

#Ejercicio 7 python:
#Escribir una función Salario que calcule los salarios de un trabajador para un número 
#dado de horas trabajadas y un salario hora. Las horas que su peren las 40 horas semanales 
#se pagarán como extras con un salario hora 1,5 veces el salario ordinario.


def Salario(hrs, pHrs):
    if hrs <= 40:
        return hrs * pHrs
    else:
        extras = hrs - 40

        return (40 * pHrs) + \
               (extras * pHrs * 1.5)

hrs = float(input("Horas trabajadas: "))
pHrs = float(input("Pago por hora: "))

if hrs < 0 or pHrs < 0:
    print("Los valores no pueden ser negativos")
else:
    print("Salario total:", Salario(hrs, pHrs))

