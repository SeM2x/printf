#include "main.h"

/**
 * dissect_float - represent float as whole and fractional parts, separate
 * @f: the float
 * @precision: the precision (digits after the mantessa)
 * Return: a FLOAT reference
 */

FLOAT *dissect_float(float f, int precision)
{
	int whole, i;
	FLOAT *my_float;

	whole = f;
	f -= whole;

	for (i = 0; i < precision; i++)
		f *= 10;

	my_float = malloc(sizeof(FLOAT));

	if (!my_float)
		return (NULL);

	my_float->whole = whole;
	my_float->fractional = f;


	return (my_float);
}
