#inlcude "main.h"
#include <stdio.h>
/**
 * _strcpy - copys string pointed by the source
 * @dest: destination
 * @src: source
 *Return: strings
 */

char *_strcpy(char *dest, char *src)
{
	int count = 0;

	while (count >= 0)
	{
		*(dest + count) = *(src + count);
		if (*(src + count) == '\0')
			break;
		count++;
	}
	return (dest);
}
