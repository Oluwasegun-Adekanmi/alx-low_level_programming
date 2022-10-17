#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - print the last digit of the number stored in the variable n
 *
 * Retun: Always 0 (success)
*/
int main(void)
{
		int n, a;

			srand(time(0));

				n = rand() - RAND_MAX / 2;

				a = n % 10;
					if (a > 5)
					{
						printf("Last digit of %d is greater than 5\n", n);
					}
					else if (a == 0)
					{
						printf("Last digit of %d is 0\n", n);
					}
					else
					{
						printf("The last digit of %d is less than 6 and not 0\n", n);
					}

					return (0);

}
