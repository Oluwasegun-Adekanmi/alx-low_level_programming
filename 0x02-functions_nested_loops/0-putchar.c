#include "main.h"
/**
 * _putchar - Entry point for the code
 *
 * Return: Always 0 (success)
 *
*/

int main(void)
{
	char x[8] = ('_','p','u','t','c','h','a','r');
	int i;

		for (i=0; i<8; i++)	{
			_putchar(x[i]);
		}
			_putchar('\n');
		
		return (0);
}
