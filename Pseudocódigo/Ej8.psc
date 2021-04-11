//	8. Diseñar un programa que calcule la superficie de un triángulo a partir del ingreso de
//	su base y altura, luego mostrar el resultado.
Algoritmo Ejercicio8
	Definir base, altura, superficie Como Real;
	
	Mientras base <= 0 Hacer
		Escribir "Ingrese la base del triángulo: ";
		Leer base;
		
		Si base <= 0 Entonces
			EScribir "ERROR! El número debe ser mayor a cero";
		Fin Si
	Fin Mientras
	
	Mientras altura <= 0 Hacer
		Escribir "Ingrese la altura: ";
		Leer altura;
		
		Si altura <= 0 Entonces
			EScribir "ERROR El número debe ser mayor a cero";
		Fin Si
	Fin Mientras
	
	superficie <- base * altura / 2;
	Escribir "La superficie es: ", superficie;
FinAlgoritmo
