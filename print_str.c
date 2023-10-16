#include "main.h"

/**
 *print_str - print a char *str
 *@s: the string pointer (char pointer)
 *
 *Return: the number of printed characters.
 */
int print_str(char *s)
{
	int len;

	len = 0;
	if (!s)
		return (0);

	for (; *s; s++)
	{
		_putchar(*s);
		len++;
	}

	return (len);
}
