#include <limits.h>
#include <stdio.h>
#include "main.h"

/**
 *main - Entry point
 *
 *Return: Always 0
 */

/* void print_ptr_as_char(void *ptr) */
/* { */

/* } */

int main(void)
{
	int len;
	
	len = _printf("%S\n", "Best\nSchool");
	/* printf("%d\n", len); */
	/* print_address(&len); */
	printf("\n%p\n", &len);
	_printf("\n%p\n", &len);
	return 0;
}
