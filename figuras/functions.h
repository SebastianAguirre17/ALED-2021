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

#define MENU                "\n1. Cuadrado\n2. C\241rculo\n3. Tri\240ngulo (Equil\240tero)\n\n0. Salir\n\nOpcion: "

#define MENU_ERROR          "\n\255La opci\242n ingresada es incorrecta!\n"
#define MSG_ERROR           "\nError\n"

/**
 * @brief Muestra un menú de opciones
 * 
 * @return int 
 */
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
 * @return int Número ingresado por el usuario
 */
int f_getInt(char* msg);

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

/**
 * @brief Solicita datos y calcula el perímetro de un triángulo
 * 
 */
void f_calculatePerimeterOfTriangle();

/**
 * @brief Solicita datos y calcula el área de un triángulo
 * 
 */
void f_calculateAreaOfTriangle();

/**
 * @brief Solicita datos y calcula el volumen de una pirámide
 * 
 */
void f_calculateVolumeOfPyramid();