#include <stdio.h>

#include "constants.h"
#include "utilities.h"
#include "program.h"

void printMenu()
{
        printf("Opciones:\n");
        printf("1.- CENIT => POLAR\n");
        printf("2.- MUERCIELAGO => 0123456789\n");
        printf("3.- OISEASGLBq => 0123456789\n");
        printf("4.- GERIGONZA\n");
        printf("%d.- SALIR\n", EXIT_CODE);
}

int questionMenuOption()
{
    int inputOption = 0;
    do {
        printf("\nIngrese una opción: ");
        scanf("%d", &inputOption);

        if (!isValidInputOption(inputOption)) {
            printf("\nError: opción no valida.\n");
        }
    } while (!isValidInputOption(inputOption));

    return inputOption;
}

int isValidInputOption(int inputOption)
{
    return inputOption >= 0 && inputOption <= 4;
}
