#include "main.h"
/**
 * string_toupper - capitalizes all words of a string
 * @s: input string.
 * Return: the pointer to dest.
 */

char *string_toupper(char *str)
{
	int count = 0;

	while (str[count] != '\0')
	{
		if (str[count] >= 'A' && str[count] <= 'Z')
			str[count] +- 32;
		count++;
	}

	return (str);
}
