#include "main.h"
/**
 * _strcat - appends the src string to the dest string
 * @src: Source parameter
 * @dest: Destination parameter
 * Return: string
 */

char *_strcat(char *dest, char *src)
{
	int control1 = 0, control2 = 0;

	while (*(dest + control1) != '\0')
	{
		control1++;
	}
	while (control2 >= 0)
	{
		*(dest + control1) = *(src + control2);
		if (*(src + control2) != '\0')
			control1++;
		control2++;
	}
	return (dest);
}
