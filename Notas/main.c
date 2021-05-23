#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

#define MAX_INPUT   3
#define R_OK        0
#define TITLE       "Ejercicio Ingreso de Notas\n"

/*
    Hacer una app que por consola muestra un menu que permita ingresar 10 notas de parciales, las cuales deben estar comprendidas entre 1 y 10.
    Una vez finalizada la carga mostrar la nota mas alta, la nota mas baja y el promedio. 

*/
int main() {

    float notas[MAX_INPUT], aux;
    int cont = 0;
    
    do {
        system("cls");
        printf(TITLE);    
        fflush(stdin);
        printf("\nIngrese un n\243mero: ");
        scanf("%f", &aux);

        if (aux < 0 || aux > 10) {
            printf("\nIngrese un valor entre 0 y 10\n");
            getch();
            continue;
        }

        notas[cont++] = aux;
    } while (cont < MAX_INPUT);
    
    system("cls");
    printf("Notas Ingresadas: \n\n");
    for (int i = 0; i < MAX_INPUT; i++) 
        printf("%.2f\n", notas[i]);

    return R_OK;
}
