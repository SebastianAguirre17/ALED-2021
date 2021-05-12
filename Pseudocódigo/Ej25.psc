//	25. En una tienda al final del día se carga en la computadora las boletas que
//	confeccionaron los distintos vendedores para saber cuánto fue la comisión del día de
//	cada uno de ellos. 
//	Los datos que se ingresan (por boleta) son: el número de vendedor y el importe. 
//	Cuando no hay más boletas para cargar se ingresa 0. 
//	Teniendo en cuenta que el negocio tiene 3 vendedores y que el porcentaje sobre las ventas es del 5%, indicar 
//	cuánto ganó cada vendedor en el día.
Algoritmo Ejercicio25
	Definir numVendedor Como Entero;
	Definir flag Como Logico;
	Definir acumVendUno, acumVendDos, acumVendTres, importeIngresado Como Real;
	
	flag <- Verdadero;
	acumVendUno <- 0;
	acumVendDos <- 0;
	acumVendTres <- 0;
	
	Mientras flag Hacer
		Escribir "Numero de vendedor: ";
		Leer numVendedor;
		
		Si numVendedor == 0 Entonces
			flag <- Falso;
		SiNo
			Escribir "Importe: ";
			Leer importeIngresado;
			
			Si importeIngresado < 0 Entonces
				Escribir "Importe incorrecto";
			SiNo
				Segun numVendedor Hacer
					1:
						acumVendUno <- acumVendUno + importeIngresado;
					2:
						acumVendDos <- acumVendUno + importeIngresado;
					3:
						acumVendTres <- acumVendTres + importeIngresado;
					De Otro Modo:
						Escribir "Empleado incorrecto!";
				Fin Segun
			Fin Si		
		Fin Si
		
	Fin Mientras
	
	acumVendUno <- acumVendUno * 0.05;
	acumVendDos <- acumVendDos * 0.05;
	acumVendTres <- acumVendTres * 0.05;
	
	Escribir "Vendedor 1 ganó: $", acumVendUno;
	Escribir "Vendedor 2 ganó: $", acumVendDos;
	Escribir "Vendedor 3 ganó: $", acumVendTres;
FinAlgoritmo
