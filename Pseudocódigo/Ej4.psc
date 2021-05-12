//	4. Escribir un programa que realice las siguientes acciones:
//	*	Declare 2 variables y les asigne valores
//	*	Realice la resta de dichas variables y muestre por pantalla la leyenda "Resultado positivo" en caso de ser 
//		mayor que cero o "Resultado negativo" si es menor que cero.

Algoritmo Ejercicio4
	Definir num1, num2, result Como Entero;
	Escribir "Ingrese el primer número";
	Leer num1;
	Escribir "Ingrese el segundo número";
	Leer num2;
	
	result <- num1 - num2
	
	Si result > 0 Entonces
		Escribir "Resultado Positivo";
	SiNo
		Si result < 0 Entonces
			Escribir "Resultado negativo";
		SiNo
			Escribir "Resultado 0";
		Fin Si
	Fin Si
	
	
	
FinAlgoritmo
