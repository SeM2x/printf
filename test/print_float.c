#include "main.h"

/**
 * print_float - print a float using _putchar
 * @f: a FLOAT reference, FLOAT is a struct
 * Return: nothing
 */

void print_float(FLOAT *f)
{
	print_int(f->whole);
	_putchar('.');
	print_int(f->fractional);

	free(f);
}
