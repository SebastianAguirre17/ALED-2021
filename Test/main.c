#include <stdio.h>
#include <stdlib.h>

// TODO: Caracteres con tilde a-240 e-202 i-241 o-242 u-243

int main() {
    char flag = 's';
    float num, cont, acum;
    num = cont = acum = 0;

    do {
        printf("Ingrese un n\243mero: ");
        scanf("%f", &num);

        acum += num;
        cont++;

        printf("Para continuar presione s: ");
        scanf("%s", &flag);

        system("cls");

    } while (flag == 's');

    printf("El promedio es: %.2f", (acum / cont));

    return 0;
}



// Realizar la tabla de multiplicar de un número y que se muestre el resultado del producto entre 1 y un limite
// int main() {

//     int num = 0, limit = 0;

//     printf("Tablas\n\n");

//     // Sin validacion
//     // printf("Ingrese un n\243mero y el l\241mite: \n");
//     // scanf("%d %d", &num, &limit);

//     // Con validacion
//     do {
//         printf("Ingrese un n\243mero mayor a cero: ");
//         scanf("%d", &num);
//         if (num > 0) {
//             do {
//                 printf("Ingrese el l\241mite, debe ser mayor a uno: ");
//                 scanf("%d", &limit);
//             } while (limit <= 0);
//         }
//     } while(num <= 0);

//     for (int i = 1; i <= limit; i++)
//         printf("\n%d x %d = %d", num, i, (num * i));


//     return 0;
// }

// 3 Números. 1 Y 2 Son límites. Verificar si el 3 lo está
// int main() {

//     int num1, num2, num3;
//     num1 = num2 = num3 = 0;

//     printf("Ingrese 3 n\243meros: \n");
//     scanf("%d %d %d", &num1, &num2, &num3);

//     if ((num1 <= num3 && num3 <= num2) || (num2 <= num3 && num3 <= num1))
//         printf("Pertenece al intervalo!");
//     else
//         printf  ("NO Pertenece al intervalo!");

//     return 0;
// }
