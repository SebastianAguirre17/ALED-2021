//	18. Dise�ar en un programa que permita ingresar 10 n�meros, ninguno de ellos igual a cero. 
//	Sumar los positivos, obtener el producto de los negativos y luego mostrar ambos resultados.
Algoritmo Ejercicio18
	Definir num, acumPos, prodNeg, contador Como Real;
	
	prodNeg <- 0;
	acumPos <- 0;
	contador <- 0;
	
	Mientras contador < 10 Hacer
		Escribir "Ingrese un n�mero: ";
		Leer num;
		
		Si num == 0 Entonces
			Escribir "Ingrese un n�mero distinto de cero.";
		SiNo
			Si num > 0 Entonces
				acumPos <- acumPos + num;
			SiNo
				Si prodNeg == 0 Entonces
					prodNeg <- 1;
				SiNo
					prodNeg <- prodNeg * num;
				FinSi
			FinSi
			contador <- contador + 1;
		FinSi
	Fin Mientras
	
	Escribir "Suma de positivos: ", acumPos;
	Escribir "Producto de negativos: ", prodNeg;
FinAlgoritmo
