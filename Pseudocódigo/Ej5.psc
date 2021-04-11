//	5. Escribir el programa necesario para calcular y mostrar el cuadrado de un número. 
//	El número debe ser mayor que cero, en caso de error que aparezca el mensaje "ERROR, el número debe ser mayor que cero".
Algoritmo Ejercicio5
	Definir num1, result Como Entero;
	
	Mientras num1 <= 0 Hacer
		Escribir "Ingrese un número: ";
		Leer num1;
		
		Si num1 <= 0 Entonces
			Escribir "ERROR, el número debe ser mayor que cero";
		Fin Si
	Fin Mientras
	
	result <- num1 * num1;
	Escribir "El cuadrado de ", num1 " es: ", result;
FinAlgoritmo
