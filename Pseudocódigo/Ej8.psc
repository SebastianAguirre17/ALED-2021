//	8. Dise�ar un programa que calcule la superficie de un tri�ngulo a partir del ingreso de
//	su base y altura, luego mostrar el resultado.
Algoritmo Ejercicio8
	Definir base, altura, superficie Como Real;
	
	Mientras base <= 0 Hacer
		Escribir "Ingrese la base del tri�ngulo: ";
		Leer base;
		
		Si base <= 0 Entonces
			EScribir "ERROR! El n�mero debe ser mayor a cero";
		Fin Si
	Fin Mientras
	
	Mientras altura <= 0 Hacer
		Escribir "Ingrese la altura: ";
		Leer altura;
		
		Si altura <= 0 Entonces
			EScribir "ERROR El n�mero debe ser mayor a cero";
		Fin Si
	Fin Mientras
	
	superficie <- base * altura / 2;
	Escribir "La superficie es: ", superficie;
FinAlgoritmo
