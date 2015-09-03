#ifndef __PROGRAM_H__
#define __PROGRAM_H__

#define OPTION_CENIT_POLAR 1
#define OPTION_MURCIELAGO 2
#define OPTION_NUMERIC 3
#define OPTION_GERIGONCIO 4

void printMenu();
int questionMenuOption();
int isValidInputOption(int inputOption);

#endif // __PROGRAM_H__
