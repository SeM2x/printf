#include "main.h"

/**
 * raise - pow(x, exp)
 * @n: x
 * @exp: the exp
 * Return: int
 */

int raise(int n, int exp)
{
	if (!exp)
		return (1);


	return (raise(n, exp - 1) * n);
}
