//	19. Ingresar un n�mero entero por teclado y efectuar la suma de todos los n�meros que le anteceden, 
//	comenzando desde 0 y mostrar el resultado por pantalla.
Algoritmo Ejercicio19
	Definir numIng, acum Como Entero;
	
	Mientras numIng <= 0 Hacer
		Escribir "Ingrese un n�mero: ";
		Leer numIng;
		
		Si numIng <= 0 Entonces
			Escribir "Ingrese un n�mero mayor a cero";
		FinSi
	Fin Mientras

	Para i <- 0 Hasta numIng - 1 Hacer
		acum <- acum + i;	
	FinPara
	
	Escribir "Suma de n�meros: ", acum;
FinAlgoritmo