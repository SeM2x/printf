#include "main.h" 

/** dec_to_hex - 
 * @decimalnum: the num in base 10
 */

int dec_to_hex(unsigned long decimalnum)
{
    unsigned long quotient, remainder;
    int i, j = 0;
    char hexadecimalnum[100];
 
 
    quotient = decimalnum;
 
    while (quotient != 0)
    {
        remainder = quotient % 16;
        if (remainder < 10)
            hexadecimalnum[j++] = 48 + remainder;
        else
            hexadecimalnum[j++] = 55 + remainder;
        quotient = quotient / 16;
    }
 
    /* display integer into character */
    for (i = j; i >= 0; i--)
            _printf("%c", hexadecimalnum[i]);
    return 0;
}
