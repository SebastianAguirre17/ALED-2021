//	29. Calcular y generar los primeros 100 n�meros m�ltiplos de 5, de 7 y de ambos.
Algoritmo Ejercicio29
	Definir num, i, contador, contadorMultiplos Como Entero;
	
	contador <- 1;
	contadorMultiplos <- 0;
	Escribir "Primeros 100 n�meros Multiplos de 5"
	Mientras contadorMultiplos < 100 Hacer
		Si contador mod 5 == 0 Entonces
			Escribir contador;
			contadorMultiplos <- contadorMultiplos + 1;
		Fin Si
		contador <- contador + 1;
	Fin Mientras
	
	contador <- 1;
	contadorMultiplos <- 0;
	Escribir "Primeros 100 n�meros Multiplos de 7"
	Mientras contadorMultiplos < 100 Hacer
		Si contador mod 7 == 0 Entonces
			Escribir contador;
			contadorMultiplos <- contadorMultiplos + 1;
		Fin Si
		contador <- contador + 1;
	Fin Mientras
	
	contador <- 1;
	contadorMultiplos <- 0;
	Escribir "Primeros 100 n�meros Multiplos de 5 y de 7"
	Mientras contadorMultiplos < 100 Hacer
		Si contador mod 5 == 0 && contador mod 7 == 0 Entonces
			Escribir contador;
			contadorMultiplos <- contadorMultiplos + 1;
		Fin Si
		contador <- contador + 1;
	Fin Mientras
FinAlgoritmo
