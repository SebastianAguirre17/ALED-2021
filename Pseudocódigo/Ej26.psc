//	26. Hacer el programa que ante la pregunta desea continuar sólo nos permita introducir como respuesta 'S' o'N'
Algoritmo Ejercicio26
	Definir respuesta Como Caracter;
	Definir flag Como Logico;
	
	flag <- Verdadero;
	Mientras flag Hacer
		Escribir "Desea continuar? (S / N)";
		Leer respuesta;
		respuesta <- Minusculas(respuesta);
		
		Si Longitud(respuesta) <> 1 Entonces
			Escribir "Ingrese solo un caracter";
		SiNo
			Si respuesta <> "s" & respuesta <> "n" Entonces
				Escribir "Respuesta incorrecta";
			SiNo
				Si respuesta == "n" Entonces
					flag <- Falso;
				Fin Si
			Fin Si
		FinSi
	Fin Mientras
FinAlgoritmo
