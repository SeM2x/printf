#include "main.h"

/**
 * str_contains - 1 if stack contains needle 0 otherwise
 * @stack: stack
 * @needle: needl
 * Return: 1 or 0
 */

int str_contains(char *stack, char needle)
{
	for (; *stack; stack++)
		if (needle == *stack)
			return (1);


	return (0);
}
