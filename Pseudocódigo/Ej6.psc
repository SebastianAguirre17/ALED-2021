// 6. De 10 n�meros ingresadas indicar cuantos son mayores a cero y cuantos son menores a cero.
Algoritmo Ejercicio6
	Definir num, positivos, negativos, contador, ceros Como Entero;
	
	contador <- 0;
	negativos <- 0;
	positivos <- 0;
	ceros <- 0;
	
	Mientras contador < 10 Hacer
		Escribir "Ingrse un n�mero: ";
		Leer num;
		
		Si num <> 0 Entonces
			Si num > 0 Entonces
				positivos <- positivos + 1;
			SiNo
				negativos <- negativos + 1;
			Fin Si
		SiNo
			ceros <- ceros + 1;
		Fin Si
		
		contador <- contador + 1;
	Fin Mientras
	
	Escribir "Catidad de n�meros mayores a cero: ", positivos;
	Escribir "Catidad de n�meros menores a cero: ", negativos;
	Escribir "Catidad de ceros ingresados: ", ceros;
FinAlgoritmo
