#include "main.h"

/**
 * print_formatted - print arg according to format
 * @format: char representing format/type (int char float ...)
 * @args: a va_list variable
 *
 * Return: number of printed chars
 */

int print_formatted(char format, va_list args, WIDTH *w)
{
	int len, val;
	
	len = 0;
	switch (format)
	{
		case 'c':
			val = va_arg(args, int);
			_putchar(val);
			return (1);
		case 'd':
			val = va_arg(args, int);
			return (
				handle_flag(w->flag, val) + 
				print_int(val)
				);
		case 'i':
			return(print_formatted('d', args, w));
		case 'u':
			return (print_uns_int(va_arg(args, unsigned int)));
		case 'f':
			return (print_float(dissect_float(va_arg(args, double), 2)));
		case 's':
			return (print_str(va_arg(args, char*)));
		case 'b':
			return (print_base_x(va_arg(args, unsigned int), 2));
		case 'o':
			val = va_arg(args, unsigned int);
			return (handle_flag(w->flag, 'o') + print_base_x(val, 8));
		case 'x':
			val = va_arg(args, unsigned int);
			return (handle_flag(w->flag, 'x') + print_base_x(val, 16));
		case 'X':
			val = va_arg(args, unsigned int);
			return (handle_flag(w->flag, 'X') + print_base_x(val, 16, 'X'));
		case 'S':
			return (print_custom_str(va_arg(args, char*)));
		case 'p':
			return (print_address(va_arg(args, void *)));
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
