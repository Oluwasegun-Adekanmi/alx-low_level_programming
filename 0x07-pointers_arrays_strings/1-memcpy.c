#include "main.h"
/**
 *  *_memcpy - copies memmory area
 *  @dest: memory been copied to
 *  @src: source
 *  @n: number of bytes been copied
 *  Return: return dest
 *
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int count;

	for (count = 0; count < n; count++)
		dest[count] = src[count];

	return (dest);
}
