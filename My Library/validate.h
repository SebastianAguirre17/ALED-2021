#ifndef VALIDATE_H_INCLUDED
#define VALIDATE_H_INCLUDED

#endif // VALIDATE_H_INCLUDED

// TODO: Caracteres con tilde a-240 e-202 i-241 o-242 u-243

#define TITLE "Esta es mi librer\241a de funciones\n"
#define MENU "\n1. Opcion_1\n2. Opcion_2\n3. Opcion_3\n4. Opcion_4\n5. Opcion_5\n6. Opcion_6\n7. Opcion_7\n8. Opcion_8\n9. Opcion_9\n10. Opcion_10\n\n0. Salir\n\nOpcion: "
#define MENU_ERROR "\nError!\n\n"

#define MAX_INPUT_BUFFER    4096
#define LF                  10
#define R_OK                0
#define R_ERROR             -1

void myFgets(char* buffer, int limite,FILE* archivo);
int val_validarUnsignedInt(char* buffer);
int val_getUnsignedInt(char* destino,char* mensaje, char* mensajeError, int intentos, int limite);