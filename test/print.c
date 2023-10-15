#include <stdarg.h>
#include <stdio.h>
#include "helpers.h"


int main(void)
{
    print("hi %X \n", 489);
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

           default:
               putchar(template[current_letter]);
       }
    }
}
