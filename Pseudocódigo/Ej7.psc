// 7. Dise�ar un programa que calcule la longitud de la circunferencia y el �rea del c�rculo de radio dado.
Algoritmo Ejercicio7
	Definir area, circ, radio Como Real;
	
	Mientras radio <= 0 Hacer
		Escribir "Ingrese el radio del c�culo: ";
		Leer radio;
		
		Si radio <= 0 Entonces
			Escribir "ERROR! Ingrese un n�mero mayor a cero";
		Fin Si
	Fin Mientras
	
	area <- PI * radio * radio;
	circ <- PI * radio;
	
	Mostrar "El �rea es: ", area;
	Mostrar "La circunferencia es: ", circ;
FinAlgoritmo
