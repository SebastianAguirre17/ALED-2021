//	31. Por teclado se ingresa el legajo, valor hora, antigüedad y cantidad de horas trabajadas en el mes de un empleado. 
//	Se pide calcular el importe a cobrar teniendo en cuenta que el otal resulta de multiplicar el valor 
//	hora por la cantidad de horas trabajadas, hay que sumarle la cantidad de años trabajados multiplicados por $30
// 	y al total de todas esas operaciones restarle el 13% en concepto de descuentos. 
//	Imprimir el recibo correspondiente con el nombre, la antigüedad, el valor hora, el total a cobrar en bruto, el
//	total de descuentos y el valor neto a cobrar.
Algoritmo Ejercicio31
	Definir legajo, antiguedad, horasTrabajadas Como Entero;
	Definir valorHora, importe, VALOR_ANTIGUEDAD, DESCUENTOS, importeTotal, totalDescuentos Como Real;
	Definir nombre Como Caracter;
	
	valorHora <- 0;
	VALOR_ANTIGUEDAD <- 30;
	DESCUENTOS <- 0.13;
	antiguedad <- 0;
	
	Mientras legajo <= 0 Hacer
		Escribir "Ingrese el legajo: ";
		Leer legajo;
		
		Si legajo <= 0 Entonces
			Escribir "Ingrese el legajo correctamente: ";
		Fin Si
	FinMientras
	
	Escribir "Ingrese el nombre: ";
	Leer nombre;
	
	Mientras valorHora <= 0 Hacer
		Escribir "Ingrese el valor de la hora: ";
		Leer valorHora;
		
		Si valorHora <= 0 Entonces
			Escribir "Ingrese un valor correcto: ";
		Fin Si
	FinMientras
	
	Mientras antiguedad <= 0 Hacer
		Escribir "Ingrese la antiguedad en años: ";
		Leer antiguedad;
		
		Si antiguedad < 0 Entonces
			Escribir "Ingrese un valor correcto: ";
		Fin Si
	FinMientras
	
	Mientras horasTrabajadas <= 0 Hacer
		Escribir "Ingrese la cantidad de horas trabajadas: ";
		Leer horasTrabajadas;
		
		Si horasTrabajadas < 0 Entonces
			Escribir "Ingrese un valor correcto: ";
		Fin Si
	FinMientras
	
	importe <- (valorHora * horasTrabajadas + antiguedad * VALOR_ANTIGUEDAD);
	totalDescuentos <- importe * DESCUENTOS;
	importeTotal <- importe - totalDescuentos;
	
	Escribir "*******************************";
	Escribir "*****	RECIBO DE HABERES. *****";
	Escribir "*******************************";
	Escribir "";
	Escribir "Nombre: ", nombre;
	Escribir "Legajo: ", legajo;
	Escribir "Antiguedad (en años): ", antiguedad;
	Escribir "Valor hora: $", valorHora;
	Escribir "";
	Escribir "importe Bruto: $", importe;
	Escribir "Total De Descuentos: $", totalDescuentos;
	Escribir "Importe Neto: $", importeTotal;
	
FinAlgoritmo
