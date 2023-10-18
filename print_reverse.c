#include "main.h"


/**
 * print_reverse - does what it says
 * @str: asdasd
 *
 * Return: int
 */
int print_reverse(char *str)
{
	int i, length = 0;

	while (str[length] != '\0')
	{
		length++;
	}
	for (i = length - 1; i >= 0; i--)
	{
		_putchar(str[i]);
	}
	return (length);
}
