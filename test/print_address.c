#include "main.h"
/**
 * print_address - print address to mimic %p in printf
 * @addr: a void *
 */


void print_address(void *addr)
{
	unsigned long l;

	l = (unsigned long) addr;

	_printf("0x");	
	
	dec_to_hex(l);	
}
