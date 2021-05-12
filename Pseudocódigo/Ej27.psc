//	27. Ingresar por teclado 3 n�meros correspondientes a los lados de un tri�ngulo.
//	Teniendo en cuenta que la suma de los dos lados menores tiene que ser superior al lado
//	mayor para que formen un tri�ngulo, indicar si los n�meros indicados forman un
//	tri�ngulo y si lo forman que tipo de tri�ngulo es.
Algoritmo Ejercicio27
	Definir lado1, lado2, lado3 Como Entero;

	Mientras lado1 <= 0 Hacer
		Escribir "Ingrese el lado A: "
		Leer lado1;
		Si lado1 <= 0 Entonces
			Escribir "Ingrese un n�mero mayor a cero";
		FinSi
	Fin Mientras
	
	Mientras lado2 <= 0 Hacer
		Escribir "Ingrese el lado B: "
		Leer lado2;
		Si lado2 <= 0 Entonces
			Escribir "Ingrese un n�mero mayor a cero";
		FinSi
	Fin Mientras
	
	Mientras lado3 <= 0 Hacer
		Escribir "Ingrese el lado C: "
		Leer lado3;
		Si lado3 <= 0 Entonces
			Escribir "Ingrese un n�mero mayor a cero";
		FinSi
	Fin Mientras
	
	Si lado1 == lado2 & lado2 == lado3 Entonces
		Escribir "Es un tri�ngulo Equilatero!";
	SiNo
		Si lado1 <> lado2 & lado2 <> lado3 & lado1 <> lado3 Entonces
			Escribir "Es un tri�ngulo Escaleno!";
		SiNo
			Escribir "Es un tri�ngulo Is�sceles!";
		Fin Si
	Fin Si
	
FinAlgoritmo
