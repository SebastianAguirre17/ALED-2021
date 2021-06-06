
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
#include <ctype.h>

#include "functions.h"

/*
    Hacer una aplicación que permita por consola la carga de superficies, areas o volumen de distintas figuras geometricas (cuadrado, triangulo, circulo). 
    Se debe seleccionar a traves de un menu la figura, y luego con otro menu el calculo que desea aplicar. 
    Todos los calculos deben estar hechos en metodos o funciones, al igual que el menu
*/
static void function_1(int opt);
static void function_2(int opt);
static void function_3(int opt);

int main() {
    // int arr[] = { 2, 8, 9, 7, 6, 10, 5, 2, 9, 6 };
    // int length = sizeof(arr)/sizeof(arr[0]); 

    f_showMenu();
    return R_OK;

}

int f_showMenu () {
    int option, subOption;

    do {
        f_clearScreen();
        printf(TITLE);
        option = f_getInt(MENU);

        switch (option) {
            case 1:
                f_clearScreen();
                subOption = f_getInt("\n1. Per\241metro del Cuadrado\n2. \265rea del Cuadrado\n3. Volumen del Cubo\n\n0. Salir\n\nOpcion: ");
                function_1(subOption);
                getch();
                break;
            case 2:
                f_clearScreen();
                subOption = f_getInt("\n1. Per\241metro del C\241rculo\n2. \265rea del C\241rculo\n3. Volumen de la Esfera\n\n0. Salir\n\nOpcion: ");
                function_2(subOption);
                getch();
                break;
            case 3:
                f_clearScreen();
                subOption = f_getInt("Hola");
                function_3(subOption);
                getch();
                break;
            case 0:
                break;
            default:
                printf (MSG_ERROR);
                getch();
        }
    } while (option != FALSE);

    return R_OK;
}

void function_1(int opt) {
    switch (opt) {
        case 1:
            f_calculatePerimeterOfSquare();
            break;
        case 2:
            f_calculateAreaOfSquare();
            break;
        case 3:
            f_calculateVolumeOfCube();
            break;
        case 0: 
            break;
        default:
            printf(MENU_ERROR);
            break;
    }
}

void function_2(int opt) {
    switch (opt) {
        case 1:
            f_calculatePerimeterOfCircle();
            break;
        case 2:
            f_calculateAreaOfCircle();
            break;
        case 3:
            f_calculateVolumeOfSphere();
            break;
        case 0: 
            break;
        default:
            printf(MENU_ERROR);
            break;
    }
    
}

void function_3(int opt) {
    printf ("\nOPCION: %d", opt);
    
}