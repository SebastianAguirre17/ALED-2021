//	23. De 3 números ingresados desde el teclado por el usuario, indicar cuál es el mayor.
Algoritmo Ejercicio23
	Definir numIngresado, max, contador Como Entero;
	contador <- 0;
	max <- 0;
	
	Repetir
		Escribir "Ingrese un número: ";
		Leer numIngresado;
		
		Si numIngresado > max Entonces
			max <- numIngresado;
		Fin Si
		contador <- contador + 1;
	Hasta Que contador == 3;
	
	Escribir "El maximo es: ", max;
FinAlgoritmo
