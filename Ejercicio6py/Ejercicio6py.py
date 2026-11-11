#Equipo 10:
#Alma Leticia Douglas Gonzales Guilbert

#Ejercicio 6 python:
#Diseñar un procedimiento que acepte un número de mes, un número de día y un número de año y los visualice
#en el formato
#dd/mm/aa
#Por ejemplo, los valores 19,09,1987 se visualizarían como
#19/9/87
#y para los valores 3, 9 y 1905
#3/9/05




def mostrar_fecha(dia, mes, anio):
    print(f"{dia}/{mes}/{anio % 100:02d}")

dia = int(input("Ingrese el dia: "))
mes = int(input("Ingrese el mes: "))
anio = int(input("Ingrese el año: "))

mostrar_fecha(dia, mes, anio)
