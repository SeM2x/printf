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
	_printf("%s%c%c%c%s%%%s%c", "Loading", '.', '.', '.', "99", "Please wait", '\n');
	_printf("%%\n");
	_printf("%");
	_printf("====\n");
	printf("%s%c%c%c%s%%%s%c", "Loading", '.', '.', '.', "99", "Please wait", '\n');
	printf("%");
	printf("%!\n");
	printf("%K\n");
	return (0);
}
