#include "main.h"
/**
 * swap_int - Swap the value of two integers.
 * @*a: values to be swapped
 * @*b: values to be swapped
 * Return: Always void.
*/

void swap_int(int *a, int *b)
{
	int swap;
	swap = *a;
	*a = *b;
	*b = swap;
}
