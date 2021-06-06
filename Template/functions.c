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
