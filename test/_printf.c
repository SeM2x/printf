#include "main.h"

/**
 * _printf - our own printf
 * @template: str, template according to which we print the args
 *
 * Return: number of chars printed.
 */

int _printf(char *template, ...)
{
	va_list args;
	int current_letter, len;
	WIDTH *padding_info; /* necessary for padding */

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
				if (template[current_letter + 1] != '\0')
				{
					padding_info = parse_argument(&template[current_letter + 1]);
					len += print_formatted(
							template[current_letter + 1 + 
							padding_info->length], args, padding_info
							);
					current_letter += padding_info->length + 1;
				}
				else
					return (-1);
				break;

			default:
				_putchar(template[current_letter]);
				len += 1;
		}
	}

	return (len);
}
