//	17. Hacer el programa que nos permita introducir un número por teclado y nos informe si es par o impar.
Algoritmo Ejercicio17
	Definir numIng Como Real;

	Mientras numIng == 0 Hacer
		Escribir "Ingrese un número: ";
		Leer numIng;
		
		Si numIng == 0 Entonces
			Escribir "Ingrese un número distinto de cero.";
		Fin Si
	Fin Mientras
	
	Si numIng % 2 == 0 Entonces
		Escribir "Es par";
	SiNo
		Escribir "Es impar";
	FinSi
FinAlgoritmo
