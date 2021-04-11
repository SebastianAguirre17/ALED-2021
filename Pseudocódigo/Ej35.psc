//	35. Realizar la tabla de multiplicar de un número entre 1 y 10 de forma que se visualice
//	de la siguiente forma: 4x1= 4 4x2= 8
Algoritmo Ejercicio35
	Definir numeroIngresado, result Como Entero;
	
	Mientras numeroIngresado < 1 | numeroIngresado > 10 Hacer
		Escribir "Ingrese un número entre 1 y 10: ";
		Leer numeroIngresado;
	Fin Mientras
	
	Para i <- 1 Hasta 10 Hacer
		result <- numeroIngresado * i;
		Escribir numeroIngresado, " x ", i, " = ", result;
	FinPara
FinAlgoritmo
