//	16. Hacer el programa que nos permita introducir un n�mero por teclado y nos informe si es positivo o negativo.
Algoritmo Ejercicio16
	Definir num Como Real;
	
	Mientras num == 0 Hacer
		Escribir "Ingrese un n�mero: ";
		Leer  num;
		
		Si num == 0 Entonces
			Escribir "Ingrese un n�mero distinto de cero.";
		FinSi
	Fin Mientras
	
	Si num > 0 Entonces
		Escribir "El n�mero es positivo!";
	SiNo
		Escribir "El numero es negativo";
	FinSi
FinAlgoritmo
