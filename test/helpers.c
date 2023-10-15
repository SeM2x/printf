#include "main.h"
#include <stdio.h>
#include <stdlib.h>


/**
 * print_int - print an int using _putchar
 * @n: the int
 * Return: nothing
 */

void print_int(int n)
{
	int lvl, tmp_n, i;

	if (n < 0)
	{
		n = -n;
		putchar('-');
	}

	tmp_n = n;

	lvl = count_exponent(n, 10);

	for (i = 0; i < lvl; i++)
	{
		tmp_n = n;
		tmp_n /= (int) raise(10, lvl - i);

		putchar(tmp_n + '0');

		tmp_n *= (int) raise(10, lvl - i);
		n -= tmp_n;
	}

	putchar(n + '0');
}

/** 
 * print_float - print a float using _putchar
 * @f: a FLOAT reference, FLOAT is a struct
 * Return: nothing
 */

void print_float(FLOAT *f)
{
	print_int(f->whole);
	putchar('.');
	print_int(f->fractional);

	free(f);
}

/**
 * count_exponent - how many times is number div by exp in order to become < exp
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


/**
 * print_str - print a char *str
 * @s: the string pointer (char pointer)
 * Return: nothing
 */

void print_str(char *s)
{
	if (!s)
		return;

	for (; *s; s++)
		putchar(*s);
}

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


/**
 * print_formatted - print arg according to format
 * @format: char representing format/type (int char flaot ...)
 * @args: a va_list variable
 * Return - nothing
 */

void print_formatted(char format, va_list args)
{
	switch(format)
	{
		case 'c':
			putchar(va_arg(args, int));
			break;

		case 'd':
			print_int(va_arg(args, int));
			break;

		case 'f':
			print_float(dissect_float(va_arg(args, double), 2));
			break;

		case 's':
			print_str(va_arg(args, char*));
			break;

		default:
			putchar(format);
	}
}
