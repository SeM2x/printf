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

	printf("%x\n", 12365);	
	_printf("%x\n", 12365);
	_printf("\n%p\n", &len);
	return 0;
}
