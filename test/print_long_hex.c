#include "main.h"

/**
 *print_long_hex - print int as long base 16.
 *@num: number in decimal.
 *@base: the base to print num in.
 *
 *Return: number of printed chars.
 */
int print_long_hex(unsigned long int num)
{
  char mod, *hexchars;
  unsigned int base;
  
  base = 16;
  hexchars = strdup("abcdef");

  if (num < base)
  {
    if (num > 9)
      mod = hexchars[num - 10];
    else
      mod = num % base + '0';
    putchar(mod);
    return (1);
  }

  return (
    print_long_hex(num / base) +
    print_long_hex(num % base)
  );
}
