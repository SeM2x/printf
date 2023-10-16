#include "main.h"

/**
 *print_base_x - print int as base X.
 *@num: number in decimal.
 *@base: the base to print num in.
 * 
 *Return: Void.
 */
void print_base_x(unsigned int num, unsigned int base, ...)
{
	va_list args;
	char mod, *hexchars, format;

	va_start(args, base);
	if (base == 16)
	{
		format = va_arg(args, int);
		if (format == 'x')
			hexchars = strdup("abcdef");
		else if (format == 'X')
			hexchars = strdup("ABCDEF");
		else
			exit(1);
	}
	
	if (num < base)
	{
		if (base == 16 && num > 9)
			mod = hexchars[num - 10];
		else
			mod = num % base + '0';
		_putchar(mod);
	}
	
	else
	{
		print_base_x(num / base, base, format);
		print_base_x(num % base, base, format);
	}

	va_end(args);
}
