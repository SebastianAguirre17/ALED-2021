#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
#include <ctype.h>
#include <math.h>

/*
    a - 240     � - 265
    e - 202     � - 220
    i - 241     � - 326
    o - 242     � - 340
    u - 243     � - 351
    � - 250     � - 255
*/

#define TRUE                1
#define FALSE               0
#define R_OK                0
#define R_ERROR             -1
#define EXIT_OPTION         3

#define TITLE               "\tT\326TULO"
#define MENU                "\tMEN\351"

#define MENU_ERROR          "\n\255La opci\242n ingresada es incorrecta!\n"
#define MSG_ERROR           "\nError\n"



/**
 * @brief Limpia la pantalla
 *
 */
void f_clearScreen(void);

/**
 * @brief Solicita un n�mero y devuelve el resultado
 *
 * @param msg Mensaje a mostrar al usuario
 * @return float N�mero ingresado por el usuario
 */
float f_getFloat(char* msg);

/**
 * @brief Solicita un n�mero y devuelve el resultado
 *
 * @param msg Mensaje a mostrar al usuario
 * @return int N�mero ingresado por el usuario
 */
int f_getInt(char* msg);

/**
 * @brief Solicita un caracter y devuelve el resultado
 *
 * @param msg Mensaje a mostrar al usuario
 * @return char Caracter ingresado por el usuario
 */
char f_getChar(char* msg);

/**
 * @brief Verifica si el dato es n�mero flotante
 *
 * @param str Cadena de caracteres a analizar
 * @return int 1 Si es num�rico - 0 Si no lo es
 */
int f_isNumberFloat(char str[]);

/**
 * @brief Verifica si el dato es n�mero
 *
 * @param str Cadena de caracteres a analizar
 * @return int 1 Si es num�rico - 0 Si no lo es
 */
int f_isNumber(char str[]);

/**
 * @brief Ordena un array con burbujeo
 *
 * @param arr Array que se desea ordenar
 * @param order "A" Ascendente - "D" Descendente
 * @param length Tama�o del array
 */
void f_sortArray(int arr[], char order[], int length);

/**
 * @brief Imprimer un array de n�meros
 *
 * @param arr Array de n�meros a mostrar
 * @param length Tama�o del array
 */
void f_printArray(int arr[], int length);

/**
 * @brief Imprimer un array de n�meros en orden inverso
 *
 * @param arr Array de n�meros a mostrar
 * @param length Tama�o del array
 */
void f_printArrayInverse(int arr[], int length);

/* NUEVAS FUNCIONES CON PUNTEROS */

/**
 * @brief Muestra un mensaje, solicita un n�mero y lo guarda en la variable asignada
 * 
 * @param pResultado Direcci�n de memoria donde se va a gusrdar el dato ingresado
 * @param mensaje Mensaje a mostrar al usuario
 * @param mensajeError Mensaje a mostrar en caso de error
 * @param minimo M�nimo valor aceptado
 * @param maximo M�ximo valor aceptado
 * @param reintentos Cantidad de iteraciones posibles
 */
int f_getNumero(int* pResultado, char* mensaje, char* mensajeError, int minimo, int maximo, int reintentos);

/**
 * @brief Muestra un mensaje, solicita un n�mero flotante y lo guarda en la variable asignada
 * 
 * @param pResultado Direcci�n de memoria donde se va a gusrdar el dato ingresado
 * @param mensaje Mensaje a mostrar al usuario
 * @param mensajeError Mensaje a mostrar en caso de error
 * @param minimo M�nimo valor aceptado
 * @param maximo M�ximo valor aceptado
 * @param reintentos Cantidad de iteraciones posibles
 */
int f_getNumeroFlotante(float* pResultado, char* mensaje, char* mensajeError, float minimo, float maximo, float reintentos);

/**
 * @brief Muestra un mensaje, solicita un caracter y lo guarda en la variable asignada
 * 
 * @param pResultado Direcci�n de memoria donde se va a gusrdar el dato ingresado
 * @param mensaje Mensaje a mostrar al usuario
 * @param mensajeError Mensaje a mostrar en caso de error
 * @param minimo M�nimo valor aceptado
 * @param maximo M�ximo valor aceptado
 * @param reintentos Cantidad de iteraciones posibles
 */
int f_getCaracter(char* pResultado, char* mensaje, char* mensajeError, char minimo, char maximo, char reintentos);