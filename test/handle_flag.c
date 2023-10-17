#include "main.h"

/**handle_flag - handles flag
 *@flag: flag to handle
 *
 *Return: number of pinted characters.
 */
int handle_flag(char flag, ...)
{
	va_list args;
	int num, len;
	char format;

	va_start(args, flag);
	len = 0;

	if (flag == ' ' || flag == '+')
	{
		num = va_arg(args, int);
		if (num >= 0)
		{
			_putchar(flag);
			len++;
		}
	}
	else if (flag == '#')
	{
		num = va_arg(args, unsigned int);
		format = va_arg(args, int);
		if (num > 0)
		{
			if (format == 'X')
				len += _printf("0X");
			else if (format == 'x')
				len += _printf("0x");
			else if(format == 'o')
				len += _printf("0");
		}
	}

	va_end(args);

	return (len);
}
