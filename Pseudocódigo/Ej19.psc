//	19. Ingresar un número entero por teclado y efectuar la suma de todos los números que le anteceden, 
//	comenzando desde 0 y mostrar el resultado por pantalla.
Algoritmo Ejercicio19
	Definir numIng, acum Como Entero;
	
	Mientras numIng <= 0 Hacer
		Escribir "Ingrese un número: ";
		Leer numIng;
		
		Si numIng <= 0 Entonces
			Escribir "Ingrese un número mayor a cero";
		FinSi
	Fin Mientras

	Para i <- 0 Hasta numIng - 1 Hacer
		acum <- acum + i;	
	FinPara
	
	Escribir "Suma de números: ", acum;
FinAlgoritmo