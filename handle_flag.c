#include "main.h"

/**
 * handle_flag - handles flag
 *@flag: flag to handle
 *
 *Return: number of pinted characters.
 */
int handle_flag(char *flags, ...)
{
	va_list args;
	int num, len, i;
	unsigned int uns;
	char format;
	char default_flags[] = "-+ #0";
	char flag; 

	va_start(args, flags);
	format = va_arg(args, int);
	len = 0;
	flag = flags[0];
	for (i = 0; flags[i]; i++)
	{
		if (get_index(default_flags, flags[i]) < get_index(default_flags, flag))
			flag = flags[i];
	}

	if ((flag == ' ' || flag == '+') && format == 'd')
	{
		num = va_arg(args, int);
		if (num >= 0)
		{
			_putchar(flag);
			len++;
		}
	}
	else if (flag == '#' && (format == 'o' || format == 'x' || format == 'X'))
	{
		uns = va_arg(args, unsigned int);
		if (uns > 0)
		{
			if (format == 'X')
				len += _printf("0X");
			else if (format == 'x')
				len += _printf("0x");
			else if (format == 'o')
				len += _printf("0");
		}
	}

	va_end(args);

	return (len);
}
