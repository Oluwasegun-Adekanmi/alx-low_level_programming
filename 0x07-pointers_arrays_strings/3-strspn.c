#include "main.h"
/**
 * _strspn - gets the length of a prefix substring.
 * @s: string
 * @accept: accept string
 * Return: count
 *
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int count, count1, bool;

	for (count = 0; s[count] != '\0'; count++)
	{
		bool = 1;
		for (count1 = 0; accept[count1] != '\0'; count1++)
		{
			if (s[count] == accept[count1])
			{
				bool = 0;
				break;
			}
		}

		if (bool == 1)
			break;
	}
	return (count);
}
