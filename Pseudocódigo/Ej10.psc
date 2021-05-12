//	10. Escribir un programa que muestre los números impares entre 0 y 100 y que imprima cuantos impares hay.
Algoritmo Ejercicio10
	Definir num, contImpares Como Entero;
	num <- 0;
	
	Mientras num < 100 Hacer
		Si num % 2 <> 0 Entonces
			Mostrar num;
			contImpares <- contImpares + 1;
		Fin Si
		num <- num + 1;
	Fin Mientras
	
	Escribir "Hay ", contImpares, " número impares.";
FinAlgoritmo
