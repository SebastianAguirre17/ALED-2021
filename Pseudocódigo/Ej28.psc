//	28. Escribir un programa que muestre los números primos comprendidos entre 0 y 100.
Algoritmo Ejercicio28
	Definir contador, num, i Como Entero;
	
	Para i <- 1 Hasta 100 Hacer
		num <- 1;
		contador <- 0;
		
		Mientras num <= i Hacer
			Si i mod num == 0 Entonces
				contador <- contador + 1;
			Fin Si
			num <- num + 1;
		FinMientras
		Si contador == 2 Entonces
			Escribir "El número ", i, " es primo";
		Fin Si
	FinPara
FinAlgoritmo
