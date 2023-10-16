#include "main.h"

/**
 * count_exponent - how many times is number div by exp
 * @number: the num
 * @exponent: the exp
 * Return: an int
 */

int count_exponent(int number, int exponent)
{
	int i;

	for (i = 0; number > exponent - 1; number /= exponent)
		i++;

	return (i);
}
