#include "main.h"

/**
 * print_hex - print int as hex
 * @n: num in decimal
 * @format: x or X
 * Return: nothing
*/

void print_hex(int num, char format)
{

	char mod;
	char *hexchars;

	if (format == 'x')
		hexchars = strdup("abcdef");
	else if (format == 'X')
		hexchars = strdup("ABCDEF");
	else
		exit(1);
	if (num < 16)
	{
		if (num > 9)
			mod = hexchars[num - 10];
		else
			mod = num % 16 + '0';

		_putchar(mod);
	}
	else
	{
		print_hex(num / 16, format);
		print_hex(num % 16, format);
	}
}


