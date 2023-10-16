#include "main.h"

/**
 *print_int - prints unsigned int using _putchar
 *@n: the int
 * 
 *Return: nothing
 */
void print_unsigned(unsigned int n)
{
	if (n < 10)
		_putchar(n + '0');
	else
	{
		print_unsigned(n / 10);
		print_unsigned(n % 10);
	}
}
