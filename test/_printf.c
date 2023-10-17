#include "main.h"

/**
 * print -our own printf
 * @template: str, template according to which we print the args
 *
 * Return: number of chars printed.
 */

int _printf(char *template, ...)
{
	va_list args;
	int current_letter, len;
	
	if (template == NULL)
		return (-1);
	va_start(args, template);

	current_letter = 0;
	len = 0;

	for (; template[current_letter] != 0; current_letter++)
	{
		switch (template[current_letter])
		{
			case '%':
				len += print_formatted(template[current_letter + 1], args);
				current_letter++;
				break;

			default:
				_putchar(template[current_letter]);
				len += 1;
		}
	}

	return (len);
}
