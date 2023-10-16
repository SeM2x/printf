#include "main.h"

/**
 * print_formatted - print arg according to format
 * @format: char representing format/type (int char flaot ...)
 * @args: a va_list variable
 *
 * Return - number of printed chars
 */

int  print_formatted(char format, va_list args)
{
	unsigned int len;
	
	len = 0;
	switch (format)
	{
		case 'c':
			_putchar(va_arg(args, int));
			break;

		case 'd':
			print_int(va_arg(args, int));
			break;

		case 'i':
			print_int(va_arg(args, int));
			break;
		
		case 'u':
			print_unsigned(va_arg(args, unsigned int));
			break;

		case 'f':
			print_float(dissect_float(va_arg(args, double), 2));
			break;

		case 's':
			print_str(va_arg(args, char*));
			break;

		case 'b':
			print_base_x(va_arg(args, unsigned int), 2);
			break;

		case 'o':
			print_base_x(va_arg(args, unsigned int), 8);
			break;

		case 'x':
			print_base_x(va_arg(args, unsigned int), 16, 'x');
			break;

		case 'X':
			print_base_x(va_arg(args, unsigned int), 16, 'X');
			break;

		default:
			_putchar(format);
	}

	return (len);
}
