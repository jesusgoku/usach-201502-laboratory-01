#ifndef __CRYPT_H__
#define __CRYPT_H__

/**
 * Encrypt str string on cenit-polar code
 *
 * C E N I T
 * P O L A R
 *
 * From CENIT to POLAR and viceversa
 * 
 * @param str String to encode
 */
void cenitPolarCrypt(char *str);

/**
 * Encrypt str string on murcielago code
 *
 * M U R C I E L A G O
 * 0 1 2 3 4 5 6 7 8 9
 *
 * From MUERCIELAGO to 0123456789
 * 
 * @param str String to encode
 */
void murcielagoCrypt(char *str);

/**
 * Encrypt str string on numeric code
 *
 * O I Z E A S G T B q
 * 0 1 2 3 4 5 6 7 8 9 0
 *
 * From OIZEASGTBq to 0123456789
 * 
 * @param str String to encode
 */
void numericCrypt(char *str);

/**
 * Encrypt str string on gerigoncio encode
 *
 * Example:
 *
 * Hola como esta => Hopolapa copomopo epastapa
 * 
 * @param str String to encode
 */
void gerigoncioCrypt(char *str);

#endif // __CRYPT_H__
