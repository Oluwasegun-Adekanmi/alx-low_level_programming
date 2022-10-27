#include "main.h"
/**
 * _strncat - concatenates two strings,
 * @dest: destination.
 * @src: source.
 * @n: amount of bytes used from src.
 * Return: the pointer to dest.
 */
char *_strncat(char *dest, char *src, int n)
{
	int ctrl1;
        int ctrl2;

        ctrl1 = 0;
        while (dest[ctrl1] != '\0')
        {
                ctrl1++;
        }

        ctrl2 = 0;
        while (ctrl2 < n && src[ctrl2] != '\0')
        {
                dest[ctrl1] = src[ctrl2];
                ctrl1++;
                ctrl2++;
        }
        dest[ctrl1] = '\0';

        return (dest);
}
