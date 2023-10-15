#include "helpers.h"
#include <stdio.h>
#include <stdlib.h>


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

void print_float(FLOAT *f)
{
    print_int(f->whole);
    putchar('.');
    print_int(f->fractional);
}

int count_exponent(int number, int exponent)
{
    int i;

    for (i = 0; number > exponent - 1; number /= exponent)
        i++;

    return (i);
}


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


void print_str(char *s)
{
    if (!s)
        return;

    for (; *s; s++)
        putchar(*s);
}

int raise(int n, int exp)
{
    if (!exp)
        return (1);


    return (raise(n, exp - 1) * n);
}

void print_hex(int num)
{
    char mod;
    if (num < 16)
    {
        switch(num)
        {
            case 10:
                mod = 'a';
                break;
            case 11:
                mod = 'b';
                break;
            case 12:
                mod = 'c';
                break;            
            case 13:
                mod = 'd';
                break;                
            case 14:
                mod = 'e';
                break;
            case 15:
                mod = 'f';
                break;
            default:
                mod = num % 16 + '0';
        }
        putchar(mod);
    }
    else
    {
        print_hex(num / 16);
        print_hex(num % 16);
    }   
}

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
	case 'x':
	    print_hex(va_arg(args, int));
	    break;
        default:
            putchar(format);
    }
}
