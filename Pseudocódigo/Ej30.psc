//	30. Dados 3 números donde el primero y el último son límites de un intervalo, indicar si el tercero pertenece a dicho intervalo.
Algoritmo Ejercicio30
	Definir num1, num2, num3 Como Entero;
	
	Escribir "Ingrese el primer número: ";
	Leer num1;
	
	Escribir "Ingrese el segundo número: ";
	Leer num2;
	
	Escribir "Ingrese el tercer número: ";
	Leer num3;
	
	Si (num2 >= num1 & num2 <= num3) | (num2 >= num3 & num2 <= num1) Entonces
		Escribir "Pertenece al intervalo"
	SiNo
		Escribir "No pertenece al intervalo"
	Fin Si
FinAlgoritmo
