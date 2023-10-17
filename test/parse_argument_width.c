
#include "main.h"

/**
 * parse_argument - extract width and height from template
 * Return: a WIDTH struct
 */
WIDTH *parse_argument(char *template)
{
	WIDTH *result;
	int i;
	char *field;
	char *fractional;

	field	= malloc(sizeof(char) * 64);
	fractionl = malloc(sizeof(char) * 64);

	result = malloc(sizeof(WIDTH));
	result->field = 0;
	result->fractionl = 0;

	for (i = 0; *template != '.' && is_digit(*template); template++)
		field[i] = *template;	

	template++;

	for (i = 0; *template != '.' && is_digit(*template); template++)
		fraction[i] = *template;	

	result->field = str_to_int(field);
	result->fraction = str_to_int(fraction);

	return (result);
}

