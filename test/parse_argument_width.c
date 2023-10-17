#include "main.h"

/**
 * parse_argument - extract width and height from template
 * Return: a WIDTH struct
 */
#define length_modifiers "sadasdasd"
#define flags "sfddsfsdf"

WIDTH *parse_argument(char *template)
{
	WIDTH *result;
	int i, length;
	char *field;
	char *fractional;

	field	= malloc(sizeof(char) * 64);
	fractionl = malloc(sizeof(char) * 64);

	result = malloc(sizeof(WIDTH));
	result->field = 0;
	result->fractional = 0;

	length = 0; /* length is to count chars in %[here]f */

	/* extracting the flag */
	if (str_contains(flags, *template))
	{
		result->flag = *template;
		lenght++;
		template++;
	}

	for (i = 0; *template != '.' && (is_digit(*template) || str_contains(length_modifiers, *template)); template++)
	{
		if (str_contains(length_modifiers, *template))
			result->modifier = *template;	
		else
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

	result->field = str_to_int(field);
	result->fractional = str_to_int(fractional);
	result->length = length + (result->fractional? 1:0) ;

	return (result);
}

