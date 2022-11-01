#include "main.h"
/**
 * *_memset - fills the memory with a constant
 * @s: memory to be filled
 * @b: the constant
 *@n: Number of bytes been filled
 *Return: return s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int count;

	for (count = 0; count < n; count++)
		s[count] = b;

	return (s);
}
