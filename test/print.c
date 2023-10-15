#include <stdarg.h>
#include <stdio.h>
#include "helpers.h"


/* int (*raise)(int, int) = pow; */
int main(void)
{
    /* print("%s is usually the first thing you learn in day %d!=%c, %f", "hello, world!", 1, '\n', 3.14); */
		print("%s %d %f \n %c", "sdsd", 12, 2.4444, 'c');
		return (0);
}


void print(char* template, ...)
{
    va_list args;
    int current_letter;

    va_start(args, template);

    current_letter = 0;


    for (; template[current_letter] != 0; current_letter++)
    {
       switch(template[current_letter])
       {
           case '%':
               print_formatted(template[current_letter+1], args);
               current_letter++;
               break;

           case '\\':
               putchar(template[current_letter]);
               current_letter++;
               break;

           default:
               putchar(template[current_letter]);
       }
    }
}
