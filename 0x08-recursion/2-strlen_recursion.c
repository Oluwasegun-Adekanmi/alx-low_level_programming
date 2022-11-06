#include "main.h"
/**
 * _strlen_recursion - prints the length of a string
 * @s: string parameter passed for printing
 * Return: returning length
 */

int _strlen_recursion(char *s)
{
	int length = 0;

	if (*s)
	{
	length++;
	length += _strlen_recursion(s + 1);
	}
}
