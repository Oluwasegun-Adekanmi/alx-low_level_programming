#include "main.h"
/**
 * *_strchr - prints character in a string
 * @s: the string
 * @c: The character
 *Return: Null
 */

//char *_strchr(char *s, char c)
//{
//	while (*s != '\0')
//	{
//		if (*s == c)
//			return ((char *) s);
//		s++;
//	}
//
//	return ('\0');
//}

char *_strchr(char *s, char c)
{
	unsigned int i = 0;

	for (; *(s + i) != '\0'; i++)
		if (*(s + i) == c)
			return (s + i);
	if (*(s + i) == c)
		return (s + i);
	return ('\0');
}
