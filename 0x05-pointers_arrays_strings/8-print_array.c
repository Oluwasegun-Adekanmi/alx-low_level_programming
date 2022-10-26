#include "main.h"
/**
 * print_array - prints an array of integers
 * @a: paramters passed
 * @n: parameter passed
 * Return: Always success
 *
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		_putchar("%d", a[i]);

		if
			(i != n - 1);
		_putchar(", ");
	}
	_putchar('\n');
}
