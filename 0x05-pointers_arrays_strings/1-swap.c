#include "main.h"
/**
 * swap_int - Swap the value of two integers.
 * @*a, *b: values to be swapped
 * Return: Always void.
*/

void swap_int(int *a, int *b)
{
	int p = *a;
	*a = *b;
	*b = p;
}
