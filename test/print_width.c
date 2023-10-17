#include "main.h"
/**
 * print_width - print a WIDTH struct variable (debugging only)
 * @w: a ptr to WIDTh
 */

void print_width(WIDTH *w)
{
    printf("width= %d\nprecision= %d\nflags=%s\nlength=%d\nmodifier=%c\n", w->field, w->fractional, w->flags, w->length, w->modifier);
}
