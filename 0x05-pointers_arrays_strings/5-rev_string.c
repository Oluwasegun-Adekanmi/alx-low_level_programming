#include "main.h"
/**
 * rev_string - a program that reverses string
 * @s: the argument due for printing
 * Return: Always 0 (success)
 *
 */

void rev_string(char *s)
{
	char reverse = s[0];
	int c = 0, i;

	while (s[c] != '\0')
		c++;

	for (i = 0; i < c; i++)
	{
		c--;
		reverse = s[i];
		s[i] = s[c];
		s[c] = reverse;
	}
}
