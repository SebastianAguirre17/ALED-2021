#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

/*
    a - 240
    e - 202
    i - 241
    o - 242
    u - 243
    ¿ - 250
    ¡ - 255
*/
/*
    Hacer una app que por consola muestra un menu que permita ingresar 10 notas de parciales, las cuales deben estar comprendidas entre 1 y 10.
    Una vez finalizada la carga mostrar la nota mas alta, la nota mas baja y el promedio. 

*/

#define MAX_INPUT   5
#define R_OK        0
#define TITLE       "\tEjercicio Ingreso de Notas\n"

int main() {
    float   notas[MAX_INPUT], aux = 0, max = 0, min = 0, acum = 0;
    int     i;    

    for (i = 0; i < MAX_INPUT; i++) {
        system("cls");
        

        if (aux < 0 || aux > 10) {
            printf("\n\255ERROR! Ingrese un valor entre 0 y 10\n");
            getch();
            i--;
        } else {
            notas[i] = aux;
        }
    }
    
    for (i = 0; i < MAX_INPUT; i++) {
        if (i == 0)
            max = min = notas[i];

        if (notas[i] > max)
            max = notas[i];
        if (notas[i] < min) 
            min = notas[i];
        
        acum += notas[i];
    }

    system("cls");
    printf(TITLE);    
    printf("\nNotas Ingresadas: \n\n");
    for (int i = 0; i < MAX_INPUT; i++) 
        printf("%.2f\n", notas[i]);

    printf("\nLa nota m\240s alta es: %.2f", max);
    printf("\nLa nota m\240s baja es: %.2f", min);
    printf("\nEl promedio es: %.2f\n", acum / MAX_INPUT);

    getch();
    return R_OK;
}
