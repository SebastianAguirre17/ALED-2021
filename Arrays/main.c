#include <stdio.h>
#include <stdlib.h>

#define MAX_INPUT   3

int main()
{
    /*
        Generar un sistema que permita el ingreso de 10 numeros y al finalizar la carga
        de los mismos muestre la suma de los mismos.
    */
    int arrNumeros[MAX_INPUT];
    int i;
    float suma = 0;

    for(i=0; i<MAX_INPUT; i++)
        arrNumeros[i] = 0;


    for(i=0; i<=MAX_INPUT; i++) {
        printf("Ingrese un numero: ");
        scanf("%d", &arrNumeros[i]);
        system("cls");
    }

    for(i=0; i<MAX_INPUT; i++)
        suma += arrNumeros[i];


    printf("Arrays :D\n\n");
    printf("El promedio es: %.2f \n\n", suma / MAX_INPUT);
    return 0;
}

//int main()
//{
//    /*
//        Generar un sistema que permita el ingreso de 10 numeros y al finalizar la carga
//        de los mismos muestre la suma de los mismos.
//    */
//    int arrNumeros[MAX_INPUT];
//    int suma = 0, i;
//
//    for(i=0; i<MAX_INPUT; i++)
//        arrNumeros[i] = 0;
//
//
//    for(i=0; i<MAX_INPUT; i++) {
//        printf("Ingrese un numero: ");
//        scanf("%d", &arrNumeros[i]);
//        system("cls");
//    }
//
//    for(i=0; i<MAX_INPUT; i++)
//        suma += arrNumeros[i];
//
//
//    printf("Arrays :D\n\n");
//    printf("La suma es: %d \n\n", suma);
//    return 0;
//}
