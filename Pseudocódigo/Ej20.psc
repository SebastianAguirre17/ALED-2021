//	20. Hacer el programa que imprima todos los n�meros naturales que hay desde la unidad hasta un n�mero que introducimos por teclado.
Algoritmo Ejercicio20
	Definir numIng Como Entero;
	
	Mientras numIng <= 0 Hacer
		Escribir "Ingrese un n�mero: ";
		Leer numIng;
		
		Si numIng <= 0 Entonces
			Escribir "Ingrese un n�mero mayor a cero";
		Fin Si
	Fin Mientras
	
	Para i <- 1 Hasta numIng Hacer
		Mostrar i;
	FinPara
FinAlgoritmo
