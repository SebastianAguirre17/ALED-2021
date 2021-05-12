#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#define MENU "\n1. Convertir a m/s\n2. Convertir a mi/h\n3. Convertit a nudos\n\n\nOpcion: "
#define MENU_ERROR "\nError\n"
#define R_OK 0
#define R_ERROR -1
#define INPUT_BUFFER 10

float kmToMeter(float km);
float kmToMile(float km);
float kmToKnot(float km);
void showMenu();
void clearScreen();
int validateUnsignedInt(char input[]);
int validateFloat(char input[]);

int main()
{
    char buffer[INPUT_BUFFER];
    float km;
    int option = 4;
    char continuar = 's';

    do
    {
        printf("Conversor de Unidades\n\n");
        printf("Ingrese los km a convertir: ");
        fgets(buffer, INPUT_BUFFER, stdin);
        km = atof(buffer);
        printf("\nIngres\242: %.2f km\n\n", km);

        showMenu();
        fgets(buffer, INPUT_BUFFER, stdin);
        if (validateUnsignedInt(buffer))
            option = atoi(buffer);

        switch (option)
        {
        case 1:
            printf("\nEquivalen a %.2f m/s\n", kmToMeter(km));
            break;
        case 2:
            printf("\nEquivalen a %.2f mi/h\n", kmToMile(km));
            break;
        case 3:
            printf("\nEquivalen a %.2f nudos\n", kmToKnot(km));
            break;
        }

        printf("\nPresione s para continuar: ");
        scanf("%s", &continuar);
        fflush(stdin);
        clearScreen();

    } while (continuar == 's');

    printf("\nComo dijo Apu: Vuelvas Prontos! :D\n");
    return R_OK;
}

float kmToMeter(float km)
{
    return km * 5 / 18;
}

float kmToMile(float km)
{
    return km * 0.62137;
}

float kmToKnot(float km)
{
    return km / 1.852;
}

void showMenu()
{
    printf(MENU);
}

void clearScreen()
{
    system("cls");
}

int validateFloat(char input[])
{
    return R_OK;
}

int validateUnsignedInt(char input[])
{
    int length = strlen(input);

    for (int i = 0; i < length; i++)
        if (!isdigit(input[i]))
            return R_ERROR;

    return R_OK;
}
