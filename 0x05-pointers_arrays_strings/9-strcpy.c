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

	while (*(src + length) != '\0')
	{
		*(dest + length) = *(src + length);
			length++;
	}
	*(dest + length) = '\0';
	return (dest);
}
