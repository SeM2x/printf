#include <limits.h>
#include <stdio.h>
#include "main.h"

/**
 *main - Entry point
 *
 *Return: Always 0
 */

int main(void)
{
	print_width(parse_argument("#123.3434l"));
	_putchar('\n');
	print_width(parse_argument("0123.3434h"));
	_printf("---------------\n");
	printf("%+d\n", 97);
	_printf("%+d\n", 97);	
	return 0;
}
