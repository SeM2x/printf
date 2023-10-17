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
	int num1 = 42;
	int num2 = -42;
	int num3 = 0;
	unsigned int num4 = 42;
	unsigned int num5 = 0;

	_printf("Complex test cases for d, i, o, x, and X:\n");

	_printf("Testing %d and %i:\n");
	_printf("Num1 (positive): %+d % d %+#d % d\n", num1, num1, num1, num1);
	_printf("Num2 (negative): %+d % d %+#d % d\n", num2, num2, num2, num2);
	_printf("Num3 (zero): %+d % d %+#d % d\n", num3, num3, num3, num3);

	_printf("\nTesting %o:\n");
	_printf("Num1 (positive): %#o %o\n", num1, num1);
	_printf("Num4 (positive unsigned): %#o %o\n", num4, num4);
	_printf("Num5 (zero unsigned): %#o %o\n", num5, num5);

	_printf("\nTesting %x and %X:\n");
	_printf("Num1 (positive): %#x %#X\n", num1, num1);
	_printf("Num4 (positive unsigned): %#x %#X\n", num4, num4);
	_printf("Num5 (zero unsigned): %#x %#X\n", num5, num5);

	return 0;
}
