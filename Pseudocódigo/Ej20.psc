//	20. Hacer el programa que imprima todos los números naturales que hay desde la unidad hasta un número que introducimos por teclado.
Algoritmo Ejercicio20
	Definir numIng Como Entero;
	
	Mientras numIng <= 0 Hacer
		Escribir "Ingrese un número: ";
		Leer numIng;
		
		Si numIng <= 0 Entonces
			Escribir "Ingrese un número mayor a cero";
		Fin Si
	Fin Mientras
	
	Para i <- 1 Hasta numIng Hacer
		Mostrar i;
	FinPara
FinAlgoritmo
