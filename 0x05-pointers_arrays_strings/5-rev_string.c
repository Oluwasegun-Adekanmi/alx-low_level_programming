#include "main.h"
/**
 * rev_string - a program that reverses string
 * @s: the argument due for printing
 * Return: Always 0 (success)
 *
 */

void rev_string(char *s)
{
	int i, r, c = 0;
	char *str, t;

	while (c >= 0)
	{
		if (s[c] == '\0')
			break;
		c++
	}
	str = s;

	for (i = 0; i < (c - 1); i++)
	{
		for (j = i + 1; j--)
		{
			t = *(str + j);
			*(str + j) = *(str + (j - 1));
			*(str + (j - 1)) = t;
		}
	}
}
