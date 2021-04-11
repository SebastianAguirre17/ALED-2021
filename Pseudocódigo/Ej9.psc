//	9. Escribir un programa que lea por teclado 20 caracteres. 
// 	Luego de la lectura indicar cuantas "a" se ingresaron, cuantas "e, i, o, u"
Algoritmo Ejercicio9
	Definir frase Como Caracter;
	Definir contA, contE, contI, contO, contU Como Entero;
	
	Mientras Longitud(frase) <> 20 Hacer
		Escribir "Escriba 20 caracteres: ";
		Leer frase;
	Fin Mientras
	
	frase <- Minusculas(frase);
	
	Para i <- 1 hasta Longitud(frase) Hacer
		Si Subcadena(frase, i, i) == "a"  Entonces
			contA <- contA + 1;
		FinSi
		Si Subcadena(frase, i, i) == "e"  Entonces
			contE <- contE + 1;
		FinSi
		Si Subcadena(frase, i, i) == "i"  Entonces
			contI <- contI + 1;
		FinSi
		Si Subcadena(frase, i, i) == "o"  Entonces
			contO <- contO + 1;
		FinSi
		Si Subcadena(frase, i, i) == "u"  Entonces
			contU <- contU + 1;
		FinSi
    FinPara
	
	Escribir "En la frase hay: ", contA, " A, ", contE, " E, ", contI, " I,", contO, " O, ", contU " U";
	
FinAlgoritmo
