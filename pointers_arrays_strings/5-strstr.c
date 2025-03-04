#include "main.h"
#include <stdlib.h>

/**
 * _strstr - Finds the first occurrence of a substring.
 * @haystack: The string to be searched.
 * @needle: The substring to locate in haystack.
 *
 * Return: A pointer to the beginning of the located substring or NULL
 */

char *_strstr(char *haystack, char *needle)
{
	char *x;
	char *y;

	if (*needle == '\0')
		return (haystack);

	while (*haystack)
	{
		x = haystack;
		y = needle;

		while (*y && *x == *y)
		{
			x++;
			y++;
		}

		if (*y == '\0')
			return (haystack);

		haystack++;
	}

	return (NULL);
}
