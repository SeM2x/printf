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
	int len;

	len = _printf("%%%%");
	printf("%d\n", len);
	len = printf("%%%%");
	printf("%d\n", len);
	return 0;
}
