# include <stdio.h>
# include <unistd.h>
/**
 * main - Program to print certain words without using printf
 *
 * Return: Always 1 (succes)
 *
*/
int main(void)

{
	write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 60);
	return (1);
}
