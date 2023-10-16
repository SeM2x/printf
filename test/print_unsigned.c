#include "main.h"

/**
 * print_uns_int - prints unsigned int using _putchar
 * @n: the int
 *
 * Return: number of printed chars.
 */
int print_uns_int(unsigned int n)
{
	if (n < 10)
	{
		_putchar(n + '0');
		return (1);
	}

	return (print_uns_int(n / 10) + print_uns_int(n % 10));
}
