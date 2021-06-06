#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
#include <ctype.h>
#include <math.h>

/*
    a - 240     Á - 265
    e - 202     É - 220
    i - 241     Í - 326
    o - 242     Ó - 340
    u - 243     Ú - 351  
    ¿ - 250     ¡ - 255
*/

#define TRUE                1
#define FALSE               0
#define R_OK                0
#define R_ERROR             -1

#define TITLE               "\tFIGURAS GEOM\220TRICAS\n"

#define MENU                "\n1. Cuadrado\n2. C\241rculo\n3. Tri\240ngulo\n\n0. Salir\n\nOpcion: "

#define MENU_ERROR          "\n\255La opci\242n ingresada es incorrecta!\n"
#define MSG_ERROR           "\nError\n"

int f_showMenu();

/**
 * @brief Limpia la pantalla
 * 
 */
void f_clearScreen(void);

/**
 * @brief Solicita un número y devuelve el resultado
 * 
 * @param msg Mensaje a mostrar al usuario
 * @return float Número ingresado por el usuario
 */
float f_getFloat(char* msg);

/**
 * @brief Solicita un número y devuelve el resultado
 * 
 * @param msg Mensaje a mostrar al usuario
 * @return int Número ingresado por el usuario
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
 * @brief Verifica si el dato es número flotante
 * 
 * @param str Cadena de caracteres a analizar
 * @return int 1 Si es numérico - 0 Si no lo es
 */
int f_isNumberFloat(char str[]);

/**
 * @brief Verifica si el dato es número
 * 
 * @param str Cadena de caracteres a analizar
 * @return int 1 Si es numérico - 0 Si no lo es
 */
int f_isNumber(char str[]);

/**
 * @brief Ordena un array con burbujeo
 * 
 * @param arr Array que se desea ordenar
 * @param order "A" Ascendente - "D" Descendente
 * @param length Tamaño del array
 */
void f_sortArray(int arr[], char order[], int length);

/**
 * @brief Imprimer un array de números
 * 
 * @param arr Array de números a mostrar
 * @param length Tamaño del array
 */
void f_printArray(int arr[], int length);

/**
 * @brief Imprimer un array de números en orden inverso
 * 
 * @param arr Array de números a mostrar
 * @param length Tamaño del array
 */
void f_printArrayInverse(int arr[], int length);

/**
 * @brief Solicita un valor y calcula el perímetro de un cuadrado
 * 
 */
void f_calculatePerimeterOfSquare();

/**
 * @brief Solicita un valor y calcula el área de un cuadrado
 * 
 */
void f_calculateAreaOfSquare();

/**
 * @brief Solicita un valor y calcula el volumen de un cubo
 * 
 */
void f_calculateVolumeOfCube();

/**
 * @brief Solicita un valor y calcula el perímetro de un círculo
 * 
 */
void f_calculatePerimeterOfCircle();

/**
 * @brief Solicita un valor y calcula el área de un círculo
 * 
 */
void f_calculateAreaOfCircle();

/**
 * @brief Solicita un valor y calcula el volumen de una esfera
 * 
 */
void f_calculateVolumeOfSphere();