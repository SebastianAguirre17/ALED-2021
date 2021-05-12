//	16. Hacer el programa que nos permita introducir un número por teclado y nos informe si es positivo o negativo.
Algoritmo Ejercicio16
	Definir num Como Real;
	
	Mientras num == 0 Hacer
		Escribir "Ingrese un número: ";
		Leer  num;
		
		Si num == 0 Entonces
			Escribir "Ingrese un número distinto de cero.";
		FinSi
	Fin Mientras
	
	Si num > 0 Entonces
		Escribir "El número es positivo!";
	SiNo
		Escribir "El numero es negativo";
	FinSi
FinAlgoritmo
