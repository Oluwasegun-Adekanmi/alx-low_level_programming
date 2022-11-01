#include "main.h"
/**
 * *_strchr - prints character in a string
 * @s: the string
 * @c: The character
 *Return: Null
 */

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
			return ((char *) s);
		s++;
	}

	return ('\0');
}
