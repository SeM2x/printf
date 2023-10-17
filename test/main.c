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
	void *addr;
	int len;
	addr = (void *) 0x7ffe637541f0;
	_printf("Address:[%x]\n", addr);
	printf("Address:[%p]\n", addr);
	_printf("Unknown:[%r]\n");
	printf("Unknown:[%r]\n");
	len = _printf(NULL);
	_printf("%d", len);
	len = printf(NULL);
	_printf("%d", len);
	len = _printf("");
	_printf("%d", len);
	len = printf("");
	_printf("%d", len);
	len = _printf("\0");
	_printf("%d", len);
	len = printf("\0");
	_printf("%d", len);
	return (0);
}
