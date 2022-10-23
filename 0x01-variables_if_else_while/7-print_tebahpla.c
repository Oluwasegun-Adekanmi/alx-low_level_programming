#include <stdio.h>
/**
 * main - Entry point
 * Return: Always 0 for success
 *
*/

int main(void)
{
	int reverse_i;

	for (reverse_i = 'z'; reverse_i >= 'a'; reverse_i--)
		putchar(reverse_i);
	putchar('\n');
	return (0);
}
