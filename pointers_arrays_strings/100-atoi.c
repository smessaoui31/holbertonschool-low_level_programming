#include "main.h"

/**
 * _atoi - Converts a string to an integer.
 * @s: The string to convert.
 *
 * Return: The converted integer, or 0 if no numbers are found.
 */
int _atoi(char *s)
{
	int a = 0;
	int b = 1;
	int c = 0;

	while (*s)
	{
		if (*s == '-')
			b *= -1;
		else if (*s == '+')
			b *= 1;
		else if (*s >= '0' && *s <= '9')
		{
			c = 1;
			a = a * 10 + (*s - '0');
		}
		else if (c)
			break;
		s++;
	}

	return (a * b);
}

