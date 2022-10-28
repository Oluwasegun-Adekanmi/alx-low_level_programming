#include "main.h"
/**
 * string_toupper - capitalizes all words of a string
 * @s: input string.
 * Return: the pointer to dest.
 */

char *string_toupper(char *s)
{

	int control;

	for (control = 0; s[control] != '\0'; control++)
	{
		if (s[control] >= 'A' && s[control] <= 'Z')
		{

			s[control] = s[control] + 32;

		}

		return (s);

	}
}
