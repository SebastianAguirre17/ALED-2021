//	37. Escribir un programa que lea 4 números e imprima el mayor de los cuatro.
Algoritmo Ejercicio37
	Definir numeroIngresado, max Como Entero;
	
	max <- 0;
	Para i <- 1 Hasta 4 Hacer
		Escribir "Ingrese un número: ";
		Leer numeroIngresado;
		
		Si numeroIngresado > max Entonces
			max <- numeroIngresado;
		Fin Si
	FinPara
	
	Escribir "El máximo ingresado es: ", max;
FinAlgoritmo
