#include "main.h"

/**
 * print_formatted - print arg according to format
 * @format: char representing format/type (int char float ...)
 * @args: a va_list variable
 *
 * Return: number of printed chars
 */

int  print_formatted(char format, va_list args)
{
	int len;

	len = 0;
	switch (format)
	{
		case 'c':
			_putchar(va_arg(args, int));
			return (1);

		case 'd':
			return (print_int(va_arg(args, int)));

		case 'i':
			return (print_int(va_arg(args, int)));

		case 'u':
			return (print_uns_int(va_arg(args, unsigned int)));

		case 'f':
			return (print_float(dissect_float(va_arg(args, double), 2)));

		case 's':
			return (print_str(va_arg(args, char*)));

		case 'b':
			return (print_base_x(va_arg(args, unsigned int), 2));

		case 'o':
			return (print_base_x(va_arg(args, unsigned int), 8));

		case 'x':
			return (print_base_x(va_arg(args, unsigned int), 16));

		case 'X':
			return (print_base_x(va_arg(args, unsigned int), 16, 'X'));

		default:

			if (format != '%')
			{
				_putchar('%');
				len++;
			}
			_putchar(format);
			return (len + 1);
	}
}
