#include "main.h"


/**
 * print_rot13 - shift chars 13 positions ascii-wise
 * @str: the char
 *
 * Return: (int);
 */

int print_rot13(char *str)
{
	if (str == NULL)
		return (_printf("(null)"));
	if (!*str)
		return (0);

	if (*str >= 'a' && *str <= 'z')
	{
		if (*str + 13 <= 'z')
		{
			_putchar(*str + 13);
		}
		else
		{
			_putchar('a' + (*str + 13 - 'z') - 1);
		}
	}
	else
	{
		if (*str >= 'A' && *str <= 'Z')
		{
			if (*str + 13 <= 'Z')
			{
				_putchar(*str + 13);
			}
			else
			{
				_putchar('A' + (*str + 13 - 'Z') - 1);
			}
		}
		else
		{
			_putchar(*str);
		}
	}

	return (1 + print_rot13(str + 1));
}
