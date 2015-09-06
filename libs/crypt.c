#include <string.h>

#include "constants.h"

void cenitPolarCrypt(char *str)
{
    char *from = "CENITcenitPOLARpolar";
    char *to = "POLARpolarCENITcenit";

    for (int strIndex = 0; CHAR_NULL != str[strIndex]; ++strIndex) {
        for (int letterIndex = 0; CHAR_NULL != from[letterIndex]; ++letterIndex) {
            if (str[strIndex] == from[letterIndex]) {
                str[strIndex] = to[letterIndex];
                break;
            }
        }
    }
}

void murcielagoCrypt(char *str)
{
    char *from = "MURCIELAGOmurcielago";
    char *to = "01234567890123456789";

    for (int strIndex = 0; CHAR_NULL != str[strIndex]; ++strIndex) {
        for (int letterIndex = 0; CHAR_NULL != from[letterIndex]; ++letterIndex) {
            if (str[strIndex] == from[letterIndex]) {
                str[strIndex] = to[letterIndex];
                break;
            }
        }
    }
}

void numericCrypt(char *str)
{
    char *from = "OIZEASGTBq";
    char *to = "01234567890";

    for (int strIndex = 0; CHAR_NULL != str[strIndex]; ++strIndex) {
        for (int letterIndex = 0; CHAR_NULL != from[letterIndex]; ++letterIndex) {
            if (str[strIndex] == from[letterIndex]) {
                str[strIndex] = to[letterIndex];
                break;
            }
        }
    }
}

void gerigoncioCrypt(char *str)
{
    char temp[MAX_MESSAGE_INPUT];
    int tempIndex = 0;
    char *findLower = "aeiou";
    char *findUpper = "AEIOU";

    for (int strIndex = 0, letterFound = 0; CHAR_NULL != str[strIndex]; ++strIndex, letterFound = 0) {
        temp[tempIndex++] = str[strIndex];

        for (int findIndex = 0; CHAR_NULL != findLower[findIndex]; ++findIndex) {
            if (findLower[findIndex] == str[strIndex]) {
                temp[tempIndex++] = 'p';
                temp[tempIndex++] = findLower[findIndex];
                letterFound = 1;
                break;
            }
        }

        if (1 == letterFound) {
            continue;
        }

        for (int findIndex = 0; CHAR_NULL != findUpper[findIndex]; ++findIndex) {
            if (findUpper[findIndex] == str[strIndex]) {
                temp[tempIndex++] = 'P';
                temp[tempIndex++] = findUpper[findIndex];
            }
        }
    }

    temp[tempIndex] = CHAR_NULL;
    strcpy(str, temp);
}
