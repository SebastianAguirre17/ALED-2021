// 7. Diseñar un programa que calcule la longitud de la circunferencia y el área del círculo de radio dado.
Algoritmo Ejercicio7
	Definir area, circ, radio Como Real;
	
	Mientras radio <= 0 Hacer
		Escribir "Ingrese el radio del cículo: ";
		Leer radio;
		
		Si radio <= 0 Entonces
			Escribir "ERROR! Ingrese un número mayor a cero";
		Fin Si
	Fin Mientras
	
	area <- PI * radio * radio;
	circ <- PI * radio;
	
	Mostrar "El área es: ", area;
	Mostrar "La circunferencia es: ", circ;
FinAlgoritmo
