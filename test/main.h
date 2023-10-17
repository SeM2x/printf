#ifndef PRINTF_HELPERS_H
#define PRINTF_HELPERS_H
#include <stdarg.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

/**
 * struct info - info
 * @type: type
 * @ret: ret
 *
 * Description: info
*/
struct info
{
	char *type;
	int ret;
};

/**
 * struct FLOAT - FLOAT
 * @whole: whole
 * @fractional: fractional
 *
 * Description: float
*/
struct FLOAT
{
	int whole;
	int fractional;
};

typedef struct FLOAT FLOAT;

int raise(int, int);
int _printf(char *template, ...);
int print_int(int num);
int print_uns_int(unsigned int num);
int print_float(FLOAT *f);
FLOAT *dissect_float(float f, int precision);
int count_exponent(int number, int exponent);
int print_str(char *s);
int print_base_x(unsigned int num, unsigned int base, ...);
int print_formatted(char format, va_list args);
int _putchar(char c);


#endif
