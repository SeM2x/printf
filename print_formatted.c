#include "main.h"


/**
 *print_formatted_part2 - continuation of print_formatted
 *@format: char representing format/type (int char float ...)
 *@args: a va_list variable
 *@w: w
 *
 *Return: number of printed chars
 */

int print_formatted_part2(char format, va_list args)
{
	int len;

	len = 0;
	switch (format)
	{
		case 'S':
			return (print_custom_str(va_arg(args, char *)));
		case 'p':
			return (print_address(va_arg(args, void *)));
		case 'r':
			return (print_reverse(va_arg(args, char *)));
		case 'R':
			return (print_rot13(va_arg(args, char *)));
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

/**
 *print_formatted - print arg according to format
 *@format: char representing format/type (int char float ...)
 *@args: a va_list variable
 *@w: w
 *
 *Return: number of printed chars
 */

int print_formatted(char format, va_list args, WIDTH *w)
{
	int val;

	switch (format)
	{
		case 'c':
			val = va_arg(args, int);
			_putchar(val);
			return (1);
		case 'd':
			val = va_arg(args, int);
			return (handle_flag(w->flags, 'd', val) + print_int(val));
		case 'i':
			return (print_formatted('d', args, w));
		case 'u':
			return (print_uns_int(va_arg(args, unsigned int)));
		case 'f':
			return (print_float(dissect_float(va_arg(args, double), 2)));
		case 's':
			return (print_str(va_arg(args, char *)));
		case 'b':
			return (print_base_x(va_arg(args, unsigned int), 2));
		case 'o':
			val = va_arg(args, unsigned int);
			return (handle_flag(w->flags, 'o', val) + print_base_x(val, 8));
		case 'x':
			val = va_arg(args, unsigned int);
			return (handle_flag(w->flags, 'x', val) + print_base_x(val, 16));
		case 'X':
			val = va_arg(args, unsigned int);
			return (handle_flag(w->flags, 'X', val) + print_base_x(val, 16, 'X'));

		default:
			return (print_formatted_part2(format, args));
	}
}
