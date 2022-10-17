#include <stdio.h>
#include <unistd.h>

/**
 * main - program that prints the alphabet in lowercase
 *
 * Return: Always 0 (success)
 *
*/

int main(void)
{
	int alph;

		for (alph = 'a'; alph <= 'z'; alph++)
		{
			putchar(alph);
		}
			putchar('\n');
		return (0);
}
