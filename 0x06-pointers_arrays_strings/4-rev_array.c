#include "main.h"
/**
 * reverse_array - reverses the content of an array
 * of inntegers
 * @a: array.
 * @n: number of elements of the array.
 * Return: no return.
 */

void reverse_array(int *a, int n)
{
	int control, control1, control2;

	for (control = 0; control < n - 1; control++)
	{
		for (control1 = control + 1; control1 > 0; control--)
		{
			control2 = *(a + control1);
			*(a + control1) = *(a + (control1 - 1));
			*(a + (control1 - 1)) = control2;
		}
	}
}
