//	3. Escribir un programa que realice las siguientes acciones
//	Asigne a 2 variables numero1 y numero2 valores distintos de cero
//	Efectúe el producto de dichas variables
//	Muestre el resultado pos pantalla
Algoritmo Ejercicio3
	Definir num1, num2, result Como Entero;

	Mientras num1 <= 0 Hacer
		Escribir "Ingrese el primer número: ";
		Leer num1;
		
		Si num1 <= 0 Entonces
			Escribir "El número debe ser mayor a cero.";
		FinSi
	Fin Mientras
	
	Mientras num2 <= 0 Hacer
		Escribir "Ingrese el segundo número: ";
		Leer num2;
		
		Si num2 <= 0 Entonces
			Escribir "El número debe ser mayor a cero.";
		FinSi
	Fin Mientras
	
	result <- num1 * num2;
	Escribir "El producto es: ", result;
	result <- num1 * num1;
	Escribir "El producto de ", num1 " es ", result;
	
FinAlgoritmo
