#include "functions.h"

int f_getInt(char* msg) {
    int aux;
    printf("%s", msg);
    scanf("%d", &aux);
    return aux;
}

void f_clearScreen(void) {
    system("cls");
}

void f_calculatePerimeterOfSquare() {
    int side = f_getInt("\nIngrese el valor de uno de los lados: ");
    printf("\nEL PER\326METRO DEL CUADRADO ES: %d\n", side * 4);
}

void f_calculateAreaOfSquare() {
    int side = f_getInt("\nIngrese el valor de uno de los lados: ");
    printf("\nEL \265REA DEL CUADRADO ES: %d (Unidad)\375\n", side * side);
}

void f_calculateVolumeOfCube() {
    int side = f_getInt("\nIngrese el valor de uno de los lados: ");
    printf("\nEL VOLUMEN DEL CUBO ES: %.2f (Unidad)\374\n", pow(side, 3));
}

void f_calculatePerimeterOfCircle() {
    int radio = f_getInt("\nIngrese el valor del radio: ");
    printf("\nEL PER\326METRO DEL C\326RCULO ES: %.2f\n", 2 * M_PI * radio);
}

void f_calculateAreaOfCircle() {
    int radio = f_getInt("\nIngrese el valor del radio: ");
    printf("\nEL \265REA DEL C\326RCULO ES: %.2f (Unidad)\375\n", radio * M_PI * M_PI);
}

void f_calculateVolumeOfSphere() {
    int radio = f_getInt("\nIngrese el valor del radio: ");
    float volume = pow(radio, 3) * 3/4 * M_PI;

    printf("\nEL VOLUMEN DE LA ESFERA ES: %.2f (Unidad)\374\n", volume);
}

void f_calculatePerimeterOfTriangle() {
    int side = f_getInt("\nIngrese el valor de uno de los lados: ");
    printf("\nEL PER\326METRO DEL TRI\265NGULO ES: %d\n", side * 3);
}

void f_calculateAreaOfTriangle() {
    int base = f_getInt("\nIngrese el valor de la base: ");
    int altura = f_getInt("\nIngrese la altura del Tri\240ngulo: ");
    printf("\nEL \265REA DEL TRI\265NGULO ES: %d (Unidad)\375\n", base * altura / 2);
}

void f_calculateVolumeOfPyramid() {
    int base = f_getInt("\nIngrese el valor de la base: ");
    int altura = f_getInt("\nIngrese la altura de la altura: ");
    printf("\nEL VOLUMEN DE LA PIR\265MIDE ES: %d (Unidad)\374\n", base * altura * 1/3);
}