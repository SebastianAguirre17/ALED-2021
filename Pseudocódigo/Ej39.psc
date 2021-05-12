//	39. Hacer un programa que imprima el mayor y el menor de una serie de 5 números que vamos introduciendo por teclado.
Algoritmo Ejercicio39
	Definir maximo, minimo, numeroIngresado Como Real;
	maximo <- 0;
	minimo <- 0;

	Para i <- 1 Hasta 5 Hacer
		Escribir "Ingrese un número: ";
		Leer numeroIngresado;
		
		Si i == 1 Entonces
			maximo <- numeroIngresado;
			minimo <- numeroIngresado;
		Fin Si
		
		Si numeroIngresado > maximo Entonces
			maximo <- numeroIngresado;
		Fin Si
		Si numeroIngresado < minimo Entonces
			minimo <- numeroIngresado;
		Fin Si
	FinPara
	
	Escribir "El máximo es: ", maximo;
	Escribir "El mínimo es: ", minimo;	
FinAlgoritmo
