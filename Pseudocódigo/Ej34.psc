//	34. Introducir una letra por teclado e indicar por pantalla si es vocal o consonante.
Algoritmo Ejercicio34
	Definir letra Como Caracter;
	
	Mientras Longitud(letra) <> 1 Hacer
		Escribir "Ingrese una sola letra: ";
		Leer letra;
	Fin Mientras
	
	letra <- Minusculas(letra);
	
	Si letra == "a" | letra == "e" | letra == "i" | letra == "o" | letra == "u" Entonces
		Escribir "Es una vocal.";
	SiNo
		Escribir "Es una consonante.";
	FinSi
	
FinAlgoritmo
