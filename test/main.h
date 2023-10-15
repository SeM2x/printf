#ifndef PRINTF_HELPERS_H
#define PRINTF_HELPERS_H

#include <stdarg.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

struct info
{
    char *type;
    int ret;
};

struct FLOAT
{
    int whole;
    int fractional;
};

typedef struct FLOAT FLOAT;

int raise(int, int);
void _printf(char* template, ...);
void print_int(int a);
void print_float(FLOAT *f);
FLOAT *dissect_float(float f, int precision);
int count_exponent(int number, int exponent);
void print_str(char *s);
void print_base_x(int num, int base, ...);
void print_formatted(char format, va_list args);
int _putchar(char c);

#endif 
