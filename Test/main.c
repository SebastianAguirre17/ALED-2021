#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

// TODO: Caracteres con tilde a-240 e-202 i-241 o-242 u-243

// Realizar un programa que convierta el valor de una velocidad ingresado en km/h a cualquiera de las siguientes unidades de medida: 1: mts/seg, 2:mph, 3:nudos
int main(int argc, char *argv[]) {
    int menu = 0;
    float km = 0;
    char continua = 's';

    do {
        system("cls");

        printf("Ingrese los km a convertir: ");
        scanf("%f", &km);

        printf("\n\r---------------------------------------------------------------------");
        printf("\n\r Conversi\242n de unidades\n");
        printf("\n\r 1. km/h a m/s.");
        printf("\n\r 2. km/h a mi/h.");
        printf("\n\r 3. km/h a nudos.");
        printf("\n\r---------------------------------------------------------------------");

        printf("\n\r\n\rIngrese opci\242n deseada: ");
        scanf("%d", &menu);

        switch(menu){
            case 1:
                printf("%.2f km/h equivalen a %.2f m/s", km, km * 0.28);
                break;
            case 2:
                printf("%.2f km/h equivalen a %.2f mi/h", km, km * 0.28);
                break;
            case 3:
//                printf("La multiplicacion es %d", num1*num2);
                break;
        }


        printf("\n\rPresione s para continuar... ");
        fflush(stdin);
        scanf("%c", &continua);

    } while(continua == 's');

    return 0;
}
