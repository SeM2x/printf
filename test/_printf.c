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
	int current_letter;

	va_start(args, template);

	current_letter = 0;

	for (; template[current_letter] != 0; current_letter++)
	{
		switch (template[current_letter])
		{
			case '%':
				print_formatted(template[current_letter + 1], args);
				current_letter++;
				break;

			default:
				_putchar(template[current_letter]);
		}
	}

	return (current_letter);
}
