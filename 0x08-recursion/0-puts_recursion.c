#include "main.h"
/**
 * _puts_recursion -  a function that prints a string, followed by a new line.
 * @s: string argument passed for printing
 *
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
	_putchar('\n');
	if (*s)
	{
	_putchar(*s);
	_puts_recursion(s + 1);
	}
}
