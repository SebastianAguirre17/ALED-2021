#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

#define LF  10


void f_myFgets(char* buffer, int limit, FILE* file) {
    int i=0;

    if(fgets(buffer, limit, file) != NULL) {
        buffer[limit-1] = '\0';

        while(buffer[i] != '\0') {
            if(buffer[i] == LF) {
                buffer[i] = '\0';
                break;
            }
            i++;
        }
    }
}

int f_getUnsignedInt(char* destino, char* mensaje, char* mensajeError, int intentos, int limite) {
    int retorno = -1;
    char buffer[MAX_INPUT_BUFFER];

    if(destino != NULL && limite > 0 && limite < MAX_INPUT_BUFFER)
    {
        printf("%s",mensaje);
        for( ; intentos>0; intentos--)
        {
            myFgets(buffer, limite ,stdin);

            if(val_validarUnsignedInt(buffer) == -1)
            {
                printf("%s",mensajeError);
                continue;
            }
            else
            {
                strncpy(destino,buffer,limite);
                retorno = 0;
                break;
            }
        }
    }
    return retorno;
}
