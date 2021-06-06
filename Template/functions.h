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

#define MENU_ERROR          "\n\255La opci\242n ingresada es incorrecta!\n"
#define MSG_ERROR           "\nError\n"

int f_showMenu(void);

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
