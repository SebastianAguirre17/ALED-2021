//	1. Ingresar 5 números y calcular su media.
Algoritmo Ejercicio1
	Definir num, acum, cont Como Entero;
	cont <- 0;
	
	Mientras cont < 5 Hacer
		Escribir "Ingrese un número";
		Leer  num;
		acum <- acum + num;
		cont <- cont + 1;
	Fin Mientras
	
	acum <- acum / 5;
	Escribir "El promedio es: ", acum;
FinAlgoritmo
