#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#include "libs/constants.h"
#include "libs/utilities.h"
#include "libs/program.h"

int main(int argc, char** argv)
{
    int inputOption = EXIT_CODE;
    char temp[MAX_MESSAGE_INPUT];

    do {
        clearScreen();
        printf("Encriptador\n");
        printf("===========\n\n");

        printMenu();
        inputOption = questionMenuOption();

        if (EXIT_CODE == inputOption) {
            break;
        }

        printf("Ingrese cadena a encriptar (max: %d): ", MAX_MESSAGE_INPUT - 1);

    } while (EXIT_CODE != inputOption);

    return 0;
}
