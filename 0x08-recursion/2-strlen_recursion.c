#include "main.h"
/**
 * _strlen_recursion - prints the length of a string
 * @s: string parameter passed for printing
 * Return: returning length
 */

int _strlen_recursion(char *s)
{
	int i, length = 0;

	if (*s)
	{
		if (*s != '\0')
			return (length);
	}
	_strlen_recursion(s + 1);
}
