#include "main.h"
/**
 * swap_int - Swap the value of two integers.
 * @*a:First value to be swapped
 * @*b:Second value to be swapped
 * Return: Always void.
*/

void swap_int(int *a, int *b)

{
	int swap;
	swap = *a;
	*a = *b;
	*b = swap;
}
