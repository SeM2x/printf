#include "main.h"


/**
 * print_reverse - does what it says
 * @str: asdasd
 */

void print_reverse(char *str)
{
	if (*str)
	{
		print_reverse(str + 1);
		putchar(*str);
	}
}
