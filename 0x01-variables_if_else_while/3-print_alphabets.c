#include <stdio.h>

/**
 *main-program entry point.
 *Return:0 no error, non zero if error.
 **/
int main(void)
{
	char i;
	char r;

	for (i = 'a'; i <= 'z'; i++)
	{
		putchar(i);
	}
	for (r = 'A'; r <= 'Z'; r++)
	{
		putchar(r);
	}
	putchar('\n');
	return (0);
}
