#include "main.h"
/**
 * print_alphabet - Entry point for the program
 *
 * Return: Always 0 (success)
 *
*/

void print_alphabet(void)
{
	char lc;

	for (lc = 'a'; lc <= 'z'; lc++)
		_putchar(lc);
	_putchar('\n');
}
