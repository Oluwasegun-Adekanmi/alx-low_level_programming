#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - prints the sum of the two diagonals of a
 * square matrix of integers.
 * @a: param one
 * @size: param two
 *
 */

void print_diagsums(int *a, int size)
{
	int counter, sum = 0, sum1 = 0;

	for (counter = 0; counter < (size * size); counter++)
	{
		if (counter % (size + 1) == 0)
			sum += a[counter];
		if (counter % (size - 1) == 0 && counter != 0 && counter < size * size - 1)
			sum1 += a[counter];
	}
		printf("%d, %d\n", sum, sum1);
}
