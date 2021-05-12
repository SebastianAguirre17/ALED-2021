#include "validate.h"

/**
 * @brief Valida que el input sea numerico
 *
 * @param input
 * @return int
 */
int v_validateUnsignedInt(char input[]) {
    int length = strlen(input);

    for (int i=0; i<length; i++)
        if (!isdigit(input[i]))
            return R_ERROR;

    return R_OK;
}



