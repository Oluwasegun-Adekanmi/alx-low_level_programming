#include "main.h"
/**
 * _strbrk - searches a string for any of a set of bytes
 * @s: string
 * @accept: second string
 * Return: Null
 *
 */

char _strbrk(char *s, char *accept)
{
	unsigned int count, count1;

	for (count = 0; s[count] != '\0'; count++)
	{
		for (count1 = 0; accept[count1] != '\0'; count1++)
		{
			if (s[count] == accept[count1])
				return (s[count]);
		}
	}

	return ('\0');
}
