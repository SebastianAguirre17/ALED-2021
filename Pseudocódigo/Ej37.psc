//	37. Escribir un programa que lea 4 n�meros e imprima el mayor de los cuatro.
Algoritmo Ejercicio37
	Definir numeroIngresado, max Como Entero;
	
	max <- 0;
	Para i <- 1 Hasta 4 Hacer
		Escribir "Ingrese un n�mero: ";
		Leer numeroIngresado;
		
		Si numeroIngresado > max Entonces
			max <- numeroIngresado;
		Fin Si
	FinPara
	
	Escribir "El m�ximo ingresado es: ", max;
FinAlgoritmo
