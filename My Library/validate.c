#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#include "validate.h"


void myFgets(char* buffer, int limite, FILE* archivo) {
    int i = 0;

    if(fgets(buffer, limite, archivo) != NULL) {
        buffer[limite-1] = '\0';

        while(buffer[i] != '\0') {
            if(buffer[i] == 10) {
                buffer[i] = '\0';
                break;
            }
            i++;
        }
    }
}

int val_getUnsignedInt(char* destino, char* mensaje, char* mensajeError, int intentos, int limite) {
    int retorno = -1;
    char buffer[MAX_INPUT_BUFFER];

    if(destino != NULL && limite > 0 && limite < MAX_INPUT_BUFFER) {
        printf("%s", mensaje);

        for( ; intentos > 0; intentos--) {
            myFgets(buffer, limite ,stdin);

            if(val_validarUnsignedInt(buffer) == -1) {
                printf("%s", mensajeError);
                continue;
            }
            else {
                strncpy(destino, buffer, limite);
                retorno = 0;
                break;
            }
        }
    }
    return retorno;
}

int val_validarUnsignedInt(char* buffer) {
    int i = 0;
    int retorno = 0;
    int flagPunto = 0;

    while(buffer[i] != '\0') {
        if(buffer[i] < '0' || buffer[i] > '9' ) {
            retorno = -1;
            break;
        }
        else {
            if(buffer[i] == '-' && i != 0) {
                retorno = -1;
                break;
            }
            else if(buffer[i] == '.') {
                flagPunto++;

                if(flagPunto > 1) {
                    retorno = -1;
                    break;
                }
            }
        }
        i++;
    }
    return retorno;
}