#inlcude "main.h"

/**
 * _strcpy - copys string pointed by the source
 * @dest: destination
 * @src: source
 *Return: strings
 */

char *_strcpy(char *dest, char *src)
{
	int length = 0;

	while (length >= 0)
	{
		*(dest + length) = *(src + length);
		if (*(src + length) == '\0')
			break;
		length++;
	}
	return (dest);
}
