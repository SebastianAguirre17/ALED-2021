//	21. Hacer el programa que nos permita contar los múltiplos de 3 desde la unidad hasta un número que introducimos por teclado.
Algoritmo Ejercicio21
	Definir contMultiplos, numIngresado Como Entero;
	
	Mientras numIngresado <= 0 Hacer
		Escribir "Ingrese un numero: ";
		Leer numIngresado;
		
		Si numIngresado <= 0 Entonces
			Escribir "ERROR! Ingrese un numero mayor a cero";
		Fin Si
	Fin Mientras
	
	Para i <- 1 Hasta numIngresado Hacer
		Si i % 3 == 0 Entonces
			contMultiplos <- contMultiplos + 1;
		Fin Si
	FinPara
	
	Escribir "Hay ", contMultiplos, " múltiplos de 3";
FinAlgoritmo
