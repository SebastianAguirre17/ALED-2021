//	38. Se ingresa por consola la cantidad de agua caída, en milímetros día a día durante un
//	mes. Se pide determinar el día de mayor lluvia, el de menor y el promedio.
Algoritmo Ejercicio38
	Definir maximo, minimo, numeroIngresado, promedio, acumulador, diaMayor, diaMenor Como Real;
	Definir cantDias Como Entero;
	maximo <- 0;
	minimo <- 0;
	promedio <- 0;
	acumulador <- 0;
	
	Mientras cantDias <= 0 Hacer
		Escribir "Cuántos días vas a ingresar?"
		Leer cantDias;
	Fin Mientras
	
	Para i <- 1 Hasta cantDias Hacer
		Escribir "Ingrese cantidad de del día : ", i;
		Leer numeroIngresado;
		
		Si i == 1 Entonces
			maximo <- numeroIngresado;
			minimo <- numeroIngresado;
			diaMayor <- i;
			diaMenor <- i;
		Fin Si
		
		Si numeroIngresado > maximo Entonces
			maximo <- numeroIngresado;
			diaMayor <- i;
		Fin Si
		Si numeroIngresado < minimo Entonces
			minimo <- numeroIngresado;
			diaMenor <- i;
		Fin Si
		acumulador <- acumulador + numeroIngresado;
	FinPara
	
	promedio <- acumulador / cantDias;
	
	Escribir "El dia de mayor lluvia fue el ", diaMayor, " con ", maximo, "mm.";
	Escribir "El dia de menor lluvia fue el ", diaMenor, " con ", minimo, "mm.";
	Escribir "El promedio de lluvia fue de ", promedio, "mm.";
FinAlgoritmo
