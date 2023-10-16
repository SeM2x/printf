#include "main.h"

/**
 *print_float - print a float using _putchar
 *@f: a FLOAT reference, FLOAT is a struct

 *Return: number of printed chars.
 */

int print_float(FLOAT *f)
{
	int len;

	len = 0;
	len += print_int(f->whole);
	_putchar('.');
	len += print_int(f->fractional);

	free(f);
	return (len + 1);
}
