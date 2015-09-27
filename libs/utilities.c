#include <stdio.h>
#include <stdlib.h>

void clearScreen()
{
    system("clear");
}

void clearStdIn()
{
    int c;
    while ((c = getchar()) != '\n' && c != EOF);
}

void pause()
{
    printf("Presione enter para continuar ...");
    getchar();
}
