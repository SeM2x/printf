#include "main.h"

/**
 * print_str - print a char *str
 * @s: the string pointer (char pointer)
 * Return: nothing
 */

void print_str(char *s)
{
	if (!s)
		return;

	for (; *s; s++)
		_putchar(*s);
}
