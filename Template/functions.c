#include "functions.h"

float f_getFloat(char* msg) {
    float aux;
    printf("%s", msg);
    scanf("%f", &aux);
    return aux;
}

int f_getInt(char* msg) {
    int aux;
    printf("%s", msg);
    scanf("%d", &aux);
    return aux;
}

char f_getChar(char* msg) {
    char aux;
    printf("%s", msg);
    fflush(stdin);
    scanf("%c", &aux);
    return aux;
}

int f_isNumberFloat(char str[]) {
    int i, flagPoint;
    i = flagPoint = 0;

    while(str[i] != '\0') {
        if (str[i] == '.' && flagPoint == 0) {
            flagPoint++;
            i++;
            continue;
        }
        if(str[i] < '0' || str[i] > '9')
            return FALSE;
        i++;
    }
    return TRUE;
}

int f_isNumber(char str[]) {
    int i = 0;
    while(str[i] != '\0') {
        if(str[i] < '0' || str[i] > '9')
            return FALSE;
        i++;
    }
    return TRUE;
}

void f_clearScreen(void) {
    system("cls");
}

void f_sortArray(int arr[], char order[], int length) {
    int i, temp;

    if (strcmp(order, "A")) {
        for (i = 0; i < length; i++) {
            for (int j = i + 1; j < length; j++) {
                if(arr[i] < arr[j]) {
                    temp = arr[i];
                    arr[i] = arr[j];
                    arr[j] = temp;
                }
            }
        }
    } else {
        for (i = 0; i < length; i++) {
            for (int j = i + 1; j < length; j++) {
                if(arr[i] > arr[j]) {
                    temp = arr[i];
                    arr[i] = arr[j];
                    arr[j] = temp;
                }
            }
        }
    }
}

void f_printArray(int arr[], int length) {
    int i;

    for(i = 0; i < length; i++)
        printf("\n%d", arr[i]);
}

void f_printArrayInverse(int arr[], int length) {
    int i;

    for(i = length - 1; i >= 0; i--)
        printf("\n%d", arr[i]);
}

int f_showMenu(void) {
    int option = TRUE;

    do {
        f_clearScreen();
        printf(TITLE);
        option = f_getInt(MENU);

        switch (option) {
            case 1:
                getch();
                break;
            case 2:
                getch();
                break;
            case 3:
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

/* NUEVAS FUNCIONES CON PUNTEROS */

int f_getNumero(int* pResultado, char* mensaje, char* mensajeError, int minimo, int maximo, int reintentos) {
    int bufferInt;
    int retorno = R_ERROR;

    do {
        if (pResultado != NULL && mensaje != NULL && mensajeError != NULL && minimo <= maximo && reintentos >= 0) {

            printf("%s", mensaje);
            fflush(stdin);
            scanf("%d", &bufferInt);

            if (bufferInt >= minimo && bufferInt <= maximo) {
                *pResultado = bufferInt;
                retorno = R_OK;
                break;
            } else {
                printf("%s", mensajeError);
                reintentos--;
            }
        }
    } while (reintentos >= 0);

    return retorno;
}

int f_getNumeroFlotante(float* pResultado, char* mensaje, char* mensajeError, float minimo, float maximo, float reintentos) {
    float bufferFloat;
    int retorno = R_ERROR;

    do {
        if (pResultado != NULL && mensaje != NULL && mensajeError != NULL && minimo <= maximo && reintentos >= 0) {

            printf("%s", mensaje);
            fflush(stdin);
            scanf("%f", &bufferFloat);

            if (bufferFloat >= minimo && bufferFloat <= maximo) {
                *pResultado = bufferFloat;
                retorno = R_OK;
                break;
            } else {
                printf("%s", mensajeError);
                reintentos--;
            }
        }
    } while (reintentos >= 0);

    return retorno;
}

int f_getNumeroCaracter(int* pResultado, char* mensaje, char* mensajeError, char minimo, char maximo, char reintentos) {
    char bufferChar;
    int retorno = R_ERROR;

    do {
        if (pResultado != NULL && mensaje != NULL && mensajeError != NULL && minimo <= maximo && reintentos >= 0) {

            printf("%s", mensaje);
            fflush(stdin);
            scanf("%c", &bufferChar);

            if (bufferChar >= minimo && bufferChar <= maximo) {
                *pResultado = bufferChar;
                retorno = R_OK;
                break;
            } else {
                printf("%s", mensajeError);
                reintentos--;
            }
        }
    } while (reintentos >= 0);

    return retorno;
}

// int showMenu() {
//     int opcion, respuesta;

//     do {
//         respuesta = f_getNumero(&opcion, MENU, MENU_ERROR, 1, 3, 5);
//         if (!respuesta) {
//             switch (opcion)
//             {
//                 case 1:
//                     break;
//                 case 2:
//                     break;
//                 case 3:
//                     break;
//             }
//         } 
//     } while (opcion =! EXIT_OPTION);

//     return R_OK;
// }
