#include "main.h"

/**
 *print_custom_str - print a char *str
 *@s: the string pointer (char pointer)
 *
 *Return: the number of printed characters.
 */
int print_custom_str(char *s)
{
	int len;

	len = 0;
	if (!s)
		return (_printf("(null)"));

	for (; *s; s++)
	{
		if (!(*s > 0 && (*s < 32 || *s >= 127)))
		{
			_putchar(*s);
			len++;
		}
		else
		{
			_putchar('\\');
			_putchar('x');
			if (*s < 16)
			{
				_putchar('0');
				len++;
			}
			len += 2 + _printf("%X", *s);
		}
	}

	return (len);
}
