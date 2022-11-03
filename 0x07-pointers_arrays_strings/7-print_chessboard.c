#include "main.h"
/**
 * print_chessboard - prints the chessboard
 * @a: input pointer
 * Return: return nothing
 *
 */

void print_chessboard(char (*a)[8])
{
	unsigned int counter, count = 0;

	for (counter = 0; counter < 64; counter++)
	{
		if (counter % 8 == 0 && counter != 0)
		{
			count = counter;
			_putchar('\n');
		}
		_putchar(a[counter / 8][counter - count]);
	}
	_putchar('\n');
}
