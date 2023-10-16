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
int _printf(char* template, ...);
void print_int(int num);
void print_unsigned(unsigned int num);
void print_float(FLOAT *f);
FLOAT *dissect_float(float f, int precision);
int count_exponent(int number, int exponent);
void print_str(char *s);
void print_base_x(unsigned int num, unsigned int base, ...);
int print_formatted(char format, va_list args);
int _putchar(char c);

#endif 
