#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
#include <ctype.h>

/*gg
    a - 240
    e - 202
    i - 241
    o - 242
    u - 243
    ¿ - 250
    ¡ - 255
*/

/*
    Hacer una app que por consola solicite la entrada de 10 numeros. Una vez cargados los 10 numeros, se debe mostrar un menu y de acuerdo a la opcion seleccionada se debe realizar las siguientes acciones. A Ordener de manera ascendente. B, Ordenar de manera descendente. C Mostrar en el estado en que fueron ingresados D mostrar en el estado inverso al que fueron ingresados
*/
#define TITLE           "\tEjercicios de Ordenamiento\n"
#define MENU            "\nA. Ordenamiento Ascendente\nB. Ordenamiento Descendente\nC. Mostrar como se ingres\242\nD. Mostrar en orden Inverso\nE. Ingresar nuevos n\243meros\n\nX. Salir\n\nOpcion: "
#define MENU_ERROR      "\n\255La opci\242n ingresada es incorrecta!\n"
#define ERROR_GENERICO  "\255ERROR - Debe ingresar primero los n\243meros!"
#define SALUDO          "\n\255Vuelvas Prontos! :D\n"
#define R_OK            0
#define MAX_INPUT       5
#define R_ERROR         -1

int main() {
    char    option = 'a';
    int     numbers[MAX_INPUT], numbersCopy[MAX_INPUT], i, j, aux;
    int     flag = R_ERROR;

    for (i = 0; i < MAX_INPUT; i++)
        numbers[i] = numbersCopy[i] = 0;

    do {
        system("cls");
        printf(TITLE);
        printf(MENU);
        fflush(stdin);
        scanf("%c", &option);
        option = toupper(option);

        switch (option) {
            case 'A':
                system("cls");
                if (flag == R_ERROR)
                    printf ("\255Primero debe ingresar los n\243meros!\n");
                else {
                    printf("\tOrdenamiento Ascendente\n");

                    for (i = 0; i < MAX_INPUT; i++)
                        numbersCopy[i] = numbers[i];

                    for (i = 0; i < MAX_INPUT; i++) {
                        for (j = 0; j < MAX_INPUT; j++) {
                            if (numbersCopy[i] < numbersCopy[j]) {
                                aux = numbersCopy[j];
                                numbersCopy[j] = numbersCopy[i];
                                numbersCopy[i] = aux;
                            }
                        }
                    }

                    for (i = 0; i < MAX_INPUT; i++)
                        printf("\n%d", numbersCopy[i]);
                }

                getch();
                break;
            case 'B':
                system("cls");
                if (flag == R_ERROR)
                    printf ("\255Primero debe ingresar los n\243meros!\n");
                else {
                    printf("\tOrdenamiento Descendente\n");

                    for (i = 0; i < MAX_INPUT; i++)
                        numbersCopy[i] = numbers[i];

                    for (i = 0; i < MAX_INPUT; i++) {
                        for (j = 0; j < MAX_INPUT; j++) {
                            if (numbersCopy[i] > numbersCopy[j]) {
                                aux = numbersCopy[j];
                                numbersCopy[j] = numbersCopy[i];
                                numbersCopy[i] = aux;
                            }
                        }
                    }

                    for (i = 0; i < MAX_INPUT; i++)
                        printf("\n%d", numbersCopy[i]);
                }

                getch();
                break;
            case 'C':
                system("cls");
                if (flag == R_ERROR)
                    printf ("\255Primero debe ingresar los n\243meros!\n");
                else {
                    printf("\tMostrar como se ingres\242\n");

                    for (i = 0; i < MAX_INPUT; i++)
                        printf("\n%d", numbers[i]);
                }

                getch();
                break;
            case 'D':
                system("cls");
                if (flag == R_ERROR)
                    printf ("\255Primero debe ingresar los n\243meros!\n");
                else {
                    printf("\tMostrar en orden Inverso\n");

                    for (i = MAX_INPUT - 1; i >= 0; i--)
                        printf("\n%d", numbers[i]);
                }

                getch();
                break;
            case 'E':
                system("cls");
                printf("Ingreso de n\243meros\n\n");

                for (i = 0; i < MAX_INPUT; i++) {
                    fflush(stdin);
                    printf("Ingrese un n\243mero: ");
                    scanf("%d", &numbers[i]);
                }

                flag = R_OK;
                break;
            case 'X':
                break;
            default:
                printf(MENU_ERROR);
                getch();
        }

    } while(option != 'X');

    printf(SALUDO);
    return R_OK;
}

