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

	printf("flag: %c\n", flag);
	va_start(args, flag);
	len = 0;

	if (flag == ' ' || flag == '+')
	{
		num = va_arg(args, int);
		if (num > 0)
		{
			_putchar(flag);
			len++;
		}
	}
	else if (flag == '#')
	{
		format = va_arg(args, int);
		if (format == 'X')
			len += _printf("0X");
		else
			len += _printf("0x");
	}

	va_end(args);

	return (len);
}
