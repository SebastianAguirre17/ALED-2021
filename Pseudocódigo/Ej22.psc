//	22. Escribir un programa para que habi�ndose le�do el valor de 2 variables NUM1 y
//	NUM2 se intercambien los valores de las variables, es decir que el valor que ten�a
//	NUM1 ahora lo contenga NUM2 y viceversa.
Algoritmo Ejercicio22
	Definir num1, num2, aux Como Entero;
	
	Escribir "Ingrese el numero 1: ";
	Leer num1;
	
	Escribir "Ingrese el numero 2: ";
	Leer num2;
	
	aux <- num1;
	num1 <- num2;
	num2 <- aux;
	
	Escribir "Nuevo n�mero 1: ", num1;
	Escribir "Nuevo n�mero 2: ", num2;
FinAlgoritmo
