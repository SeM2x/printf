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

	/* len = printf("%p\n", NULL); */
	/* printf("%d\n", len); */
	/* len = _printf("%p\n", NULL); */
	/* printf("%d\n", len); */
	
	_printf("%x\n", &len);
	printf("%x\n", &len);

	return 0;
}
