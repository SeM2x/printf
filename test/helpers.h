//
// Created by bader on 14/10/23.
//

#ifndef PRINTF_HELPERS_H
#define PRINTF_HELPERS_H
#include <stdarg.h>

struct info
{
    char *type; // a string representing the type of arg
    int ret; // ret for return
};

struct FLOAT
{
    int whole;
    int fractional;
};

typedef struct FLOAT FLOAT;

int raise(int, int);
void print(char* template, ...);
void print_int(int a);
void print_float(FLOAT *f);
FLOAT *dissect_float(float f, int precision);
int count_exponent(int number, int exponent);
void print_str(char *s);
print_formatted(char format, va_list args);

#endif //PRINTF_HELPERS_H
