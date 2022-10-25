#include "main.h"
/**
 * _strlen - prints the length of strings
 * @*s: argument to be printed.
 * Return:length
 *
*/

int _strlen(char *s)
{
	int count = 0;
	
	while (*s != 0)
	{
		count++;
		s++
	}
	return (count);
}
