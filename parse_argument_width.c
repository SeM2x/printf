#include "main.h"

/**
 * parse_argument - extract width and height from template
 * Return: a WIDTH struct
 */
char length_modifiers[] = "hl";
char flags[]  = "-+ #0";
int temp_num_flags = 1024;

WIDTH *parse_argument(char *template)
{
    WIDTH *result;
    int i, length;
    char *field;
    char *fractional;

    field	= malloc(sizeof(char) * 64);
    fractional = malloc(sizeof(char) * 64);

    result = malloc(sizeof(WIDTH));
    result->field = 0;
    result->fractional = 0;
    result->flags = malloc(sizeof(char) * temp_num_flags);

    length = 0; /* length is to count chars in %[here]f */

    /* extracting the flag */
    while (str_contains(flags, *template))
    {
        result->flags[length] = *template;
        length++;
        template++;
    }

    result->flags[length] = '\0'; /*seal the thing once and for all!*/

    for (i = 0; *template != '.' && (is_digit(*template) || str_contains(length_modifiers, *template)); template++)
    {
        field[i] = *template;
        i++;
        length++;
    }
    field[i] = 0;

    template++;

    for (i = 0; is_digit(*template); template++)
    {
        fractional[i] = *template;
        i++;
        length++;
    }

    fractional[i] = 0;

    if (str_contains(length_modifiers, *template))
        result->modifier = *template;


    result->field = str_to_int(field);
    result->fractional = str_to_int(fractional);
    result->length = length + (result->fractional? 1:0) ;

    return (result);
}
