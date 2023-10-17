#include "main.h"

/**
 *print_int - prints int using _putchar
 *@n: the int
 *
 *Return: number of printed chars.
 */
int print_int(int n, ...)
{
	int flag;
	va_list args;
	va_start(args, n);

	flag = va_arg(args, int);
	if (flag == '+' || flag == ' ')
		return (handle_flag(flag, n) + print_int(n, 0));
	if (n < 0)
	{
		_putchar('-');
		return (1 + print_int(-n));
	}

	if (n < 10)
	{
		_putchar(n + '0');
		return (1);
	}

	return (print_int(n / 10) + print_int(n % 10));
}
