#include "main.h"

/**
 * print_address - print address to mimic %p in printf
 * @addr: a void *
 *
 * Return: number of printed characters
 */
int print_address(void *addr)
{
	unsigned long l;

	if (addr == NULL)
		return (_printf("(nil)"));

	l = (unsigned long) addr;

	return (_printf("0x") +	print_base_x(l, 16));


}
