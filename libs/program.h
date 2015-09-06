#ifndef __PROGRAM_H__
#define __PROGRAM_H__

#define OPTION_CENIT_POLAR 1
#define OPTION_MURCIELAGO 2
#define OPTION_NUMERIC 3
#define OPTION_GERIGONCIO 4

/**
 * Print on standard output program menu
 */
void printMenu();

/**
 * Read from stadndard input an option and validate.
 * 
 * @return [description]
 */
int questionMenuOption();

/**
 * Check if user input option is valid
 * 
 * @param  inputOption User input option valie
 * @return             1 if option is valid and 0 is not valid
 */
int isValidInputOption(int inputOption);

#endif // __PROGRAM_H__
