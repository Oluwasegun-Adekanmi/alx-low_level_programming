#include "main.h"
/**
 * _strncat - concatenates two strings
 * @dest: The destination parameter
 * @src: The source parameter
 * Return: Returning the destination parameter successfully
 * @n: size of byte
 *
 */

char *_strncat(char *dest, char *src, int n)
{
	int ctrl1, ctrl2;

	ctrl1 = 0;
	ctrl2 = 0;

	while (*(dest + ctrl1) != '\0')
	{
		ctrl1++;
	}

	while (ctrl2 <= 0)
	{
		if (*(src + ctrl2) != '\0')
		ctrl1++;
		ctrl2++;
	}

	return (dest);
}
