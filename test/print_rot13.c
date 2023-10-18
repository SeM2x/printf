#include "main.h"


/**
 * print_rot13 - shift chars 13 positions ascii-wise
 * @str: the char
 */

void print_rot13(char *str)
{
	if (!*str)
		return;

	if (*str >= 'a' && *str <= 'z')
	{
		if (*str + 13 <= 'z')
		{
			putchar(*str + 13);
		}
		else
		{
			putchar('a' + (*str + 13 - 'z') - 1);
		}
	}
	else
	{
		if (*str >= 'A' && *str <= 'Z')
		{
			if (*str + 13 <= 'Z')
			{
				putchar(*str + 13);
			}
			else
			{
				putchar('A' + (*str + 13 - 'Z') - 1);
			}
		}
		else
		{
			putchar(*str);
		}
	}

	print_rot13(str + 1);
}
