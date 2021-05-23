#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

/*
    a - 240
    e - 202
    i - 241
    o - 242
    u - 243
*/

#define MENU            "\n1. Suma\n2. Resta\n3. Multiplicaci\242n\n4. Divisi\242n\n\nOpcion: "
#define R_OK            0
#define MAX_INPUT       3

int main() {
    int numIngresados[MAX_INPUT];
    char continuar = 's';
    int option, i;
    float result;

    do {
        result = 0;
        for (i = 0; i < MAX_INPUT; i++)
            numIngresados[i] = 0;

        for (i = 0; i < MAX_INPUT; i++) {
            printf("Ingrese un n\243mero: ");
            scanf("%d", &numIngresados[i]);
        }

        printf(MENU);
        scanf("%d", &option);

        switch (option) {
            case 1:
                for (i = 0; i < MAX_INPUT; i++)
                    result += numIngresados[i];
                printf("\nEl resultado es: %.2f", result);
                break;
            case 2:
                for (i = 0; i < MAX_INPUT; i++)
                    result -= numIngresados[i];
                printf("\nEl resultado es: %.2f", result);
                break;
            case 3:
                result = numIngresados[0];
                for (i = 1; i < MAX_INPUT; i++)
                    result *= numIngresados[i];
                printf("\nEl resultado es: %.2f", result);
                break;
            case 4:
                result = numIngresados[0];
                for (i = 1; i < MAX_INPUT; i++)
                    result /= numIngresados[i];
                printf("\nEl resultado es: %.2f", result);
                break;
        }

        printf("\n\nPresione s para continuar: ");
        scanf("%s", &continuar);
        system("cls");

    } while (continuar == 's');

    printf("\nComo dijo Apu: Vuelvas Prontos! :D\n");
    return R_OK;
}
