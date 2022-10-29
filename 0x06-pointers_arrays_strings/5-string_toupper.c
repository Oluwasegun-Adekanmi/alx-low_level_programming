#include "main.h"
/**
 * *string_toupper - converts lower case to upper case
 * @str: strings to be converted
 * Return: return 0 for success
 *
 */

char *string_toupper(char *str)
{
	int count = 0;

	while (str[count])
	{
		if (str[count] >= 'a' && str[count] <= 'z')
			str[count] -= 32;

		count++;
	}

	return (str);
}
