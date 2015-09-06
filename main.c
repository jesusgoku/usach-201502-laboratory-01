#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#include "libs/constants.h"
#include "libs/utilities.h"
#include "libs/program.h"
#include "libs/crypt.h"

/**
 * Encrypt program
 * @param  argc Number of arguments
 * @param  argv Array of arguments
 * @return      state of program
 */
int main(int argc, char *argv[])
{
    int inputOption = EXIT_CODE;
    char temp[MAX_MESSAGE_INPUT];

    do {
        printf("Encriptador\n");
        printf("===========\n\n");

        printMenu();
        inputOption = questionMenuOption();

        if (EXIT_CODE == inputOption) {
            break;
        }

        printf("Ingrese cadena a encriptar (max:  %d): ", MAX_MESSAGE_INPUT - 1);
        clearStdIn();
        fgets(temp, sizeof(temp), stdin);

        switch (inputOption) {
            case OPTION_CENIT_POLAR:
                cenitPolarCrypt(temp);
                break;
            case OPTION_MURCIELAGO:
                murcielagoCrypt(temp);
                break;
            case OPTION_NUMERIC:
                numericCrypt(temp);
                break;
            case OPTION_GERIGONCIO:
                gerigoncioCrypt(temp);
                break;
        }

        printf("\n\nMensaje encriptado: %s\n\n", temp);

    } while (EXIT_CODE != inputOption);

    return 0;
}
