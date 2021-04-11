//	24. Escribir un programa que permita registrar de los empleados de una fábrica (no se sabe cuántos) 
//	su peso y saber cuántos pesan hasta 80 kg. inclusive y cuantos pesan más de 80 kg.
Algoritmo Ejercicio24
	Definir contador, contHastaOchenta, contMasDeOchenta Como Entero;
	Definir flag Como Logico;
	Definir pesoIngresado Como Real;
	Definir op Como Caracter;
	
	flag <- Verdadero;
	contador <- 0;
	contHastaOchenta <- 0;
	contMasDeOchenta <- 0;
	
	Mientras flag Hacer
		Escribir "Ingrese el peso de un empleado: ";
		Leer pesoIngresado;
		
		Si pesoIngresado < 40 || pesoIngresado > 200 Entonces
			Escribir "Ingrese un peso correcto: ";
			Leer pesoIngresado;
		SiNo
			Si pesoIngresado <= 80 Entonces
				contHastaOchenta <- contHastaOchenta + 1;
			SiNo
				contMasDeOchenta <- contMasDeOchenta + 1;
			Fin Si
		Fin Si
		
		Escribir "Desea continuar? (S / N)";
		Leer op;
		
		Si op == "N" || op == "n" Entonces
			flag <- Falso;
		Fin Si
	Fin Mientras
	
	Escribir "Cantidad con mas de 80: ", contMasDeOchenta;
	Escribir "Cantidad hasta 80: ", contHastaOchenta;
FinAlgoritmo
