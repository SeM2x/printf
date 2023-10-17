#include "main.h"
/**
 * print_int_v1 - print an int using __putchar
 * @n: the int
 * Return: nothing
 */

void print_int_v1(int n)
{
	int lvl, tmp_n, i;

	if (n < 0)
	{
		n = -n;
		_putchar('-');
	}

	tmp_n = n;

	lvl = count_exponent(n, 10);

	for (i = 0; i < lvl; i++)
	{
		tmp_n = n;
		tmp_n /= (int) raise(10, lvl - i);

		_putchar(tmp_n + '0');

		tmp_n *= (int) raise(10, lvl - i);
		n -= tmp_n;
	}

	_putchar(n + '0');
}

