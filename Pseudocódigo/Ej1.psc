//	1. Ingresar 5 n�meros y calcular su media.
Algoritmo Ejercicio1
	Definir num, acum, cont Como Entero;
	cont <- 0;
	
	Mientras cont < 5 Hacer
		Escribir "Ingrese un n�mero";
		Leer  num;
		acum <- acum + num;
		cont <- cont + 1;
	Fin Mientras
	
	acum <- acum / 5;
	Escribir "El promedio es: ", acum;
FinAlgoritmo
