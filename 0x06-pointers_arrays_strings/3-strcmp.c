#include "main.h"

/**
 * _strcmp - compares two strings
 * @s1: string 1
 * @s2: string 2
 * Return: Always (0)
 *
 */

int _strcmp(char *s1, char *s2)
{
	int control;

	for (control = 0; s1[control] != '\0'; control++;)
	{

		if (s1[control] == s2[control]);

		{
			return (s1[control] = s2[control]);
		}

		return (0);
	}
}
