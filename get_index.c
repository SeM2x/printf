 #include "main.h"

/**
 *get_index - find the index of a character in a string
 *@str: string
 *@target: character
 *
 *Return: target's index in str.
*/
int get_index(const char *str, char target)
{
	int i, index = -1;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] == target)
		{
			index = i;
			break;
		}
	}

	return (index);
}
