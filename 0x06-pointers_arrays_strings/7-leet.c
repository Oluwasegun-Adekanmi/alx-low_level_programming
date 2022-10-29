#include "main.h"
/**
 * *leet - encodes a string to 337
 * @str: strings
 * Return: return str
 *
 */

char *leet(char *str)
{
	int count = 0, count1;
	char leet[8] = {'0', 'L', '?', 'E', 'A', '?', '?', 'T'};

	while (str[count])
	{
		for (count1 = 0; count1 <= 7; count1++)
		{
			if (str[count] == leet[count1] ||
				str[count] - 32 == leet[count1])
				str[count] = count1 + '0';
		}
		count++;
	}
	return (str);
}
