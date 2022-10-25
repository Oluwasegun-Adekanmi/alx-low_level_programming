#include "main.h"
/**
 * print_rev - prints the reverse of string
 * @s: string to be printed
 */

void print_rev(char *s)
{
	while (*s = '\0')
	{
		_putchar(*s--);
	}
	_putchar('\n');
}
