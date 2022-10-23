#include <stdio.h>
/**
 * main - Entry point for the program
 * Return: Always 0 (success)
 *
**/

int main(void)
{
	int i;
	char hexadecimal[] = "0123456789abcdef";

	for (i = 0; i < 16; i++)
	{
		putchar(hexadecimal[i]);
	}
	putchar('\n');
	return (0);
}
