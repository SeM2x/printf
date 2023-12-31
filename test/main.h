#ifndef PRINTF_HELPERS_H
#define PRINTF_HELPERS_H
#include <stdarg.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <stdio.h>
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


/**
 * struct WIDTH - FLOAT
 * @field: the width of the whole field
 * @fractional: the precision of the fractional par
 * @length: the num of chars in width/precision
 *
 * Description: tells print_int and print_f about the width
*/

struct WIDTH
{
	int field;
	int fractional;
	int length;
	char *flags;
	char modifier;
};

typedef struct WIDTH WIDTH;

int raise(int, int);
int _printf(char *template, ...);
int print_int(int num);
int print_uns_int(unsigned int num);
int print_float(FLOAT *f);
FLOAT *dissect_float(float f, int precision);
int count_exponent(int number, int exponent);
int print_str(char *s);
int print_custom_str(char *s);
int print_base_x(unsigned long int num, unsigned int base, ...);
int print_base_x2(void *addr, unsigned int base, ...);
int print_formatted(char format, va_list args, WIDTH *w);
int _putchar(char c);
int dec_to_hex(unsigned long decimalnum);
int print_address(void *addr);
int print_long_hex(unsigned long int num);
WIDTH *parse_argument(char *template);
int str_to_int(char *str);
int is_digit(char c);
int str_contains(char *stack, char needle);
void print_width(WIDTH *w);
int handle_flag(char *flags, ...);
int print_reverse(char *str);
int print_rot13(char *str);
int get_index(const char *str, char target);
#endif
