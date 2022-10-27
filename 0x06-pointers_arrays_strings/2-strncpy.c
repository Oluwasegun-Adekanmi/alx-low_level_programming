#include "main.h"
/**
 * _strncpy - copy's a string
 * @dest: destination
 * @src: source
 * @n: bytes from src
 * Return: dest
 *
 */

char *_strncpy(char *dest, char *src, int n)
{
	int ctrl;

	for (ctrl = 0; ctrl < n && src[ctrl] != '\0'; ctrl++)

		dest[ctrl] = src[ctrl];

	for (ctrl = 0; ctrl < n; ctrl++)

		dest[ctrl] = '\0';

	return (dest);
}
