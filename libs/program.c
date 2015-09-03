#include <stdio.h>

#include "constants.h"
#include "utilities.h"
#include "program.h"

void printMenu()
{
        printf("Opciones:\n");
        printf("%d.- CENIT => POLAR\n", OPTION_CENIT_POLAR);
        printf("%d.- MUERCIELAGO => 0123456789\n", OPTION_MURCIELAGO);
        printf("%d.- OISEASGLBq => 0123456789\n", OPTION_NUMERIC);
        printf("%d.- GERIGONCIO\n", OPTION_GERIGONCIO);
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
