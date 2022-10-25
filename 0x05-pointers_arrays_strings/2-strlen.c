#include "main.h"
/**
 * _strlen - prints the length of strings
 * @*s: argument to be printed.
 * Return:void
 *
*/

int _strlen(char *s)
{
	int c;

	for (c = 0; *s[c] !='\0'; c++);
	return c;
}
