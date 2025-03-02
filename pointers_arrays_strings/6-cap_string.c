#include "main.h"
/**
 * cap_string - Capitalizes all words in a string.
 * @str: Pointer to the input string.
 *
 * Description: Words are separated by space, tab, newline, ',', ';', '.',
 * '!', '?', '"', '(', ')', '{', and '}'.
 *
 * Return: Pointer to the modified string.
 */
char *cap_string(char *str)
{
	int x  = 0;
	int y = 1;
	char separators[] = " \t\n,;.!?\"(){}";
	int j;

	while (str[x] != '\0')
	{
		for (j = 0; separators[j] != '\0'; j++)
		{
			if (str[x] == separators[j])
			{
				y = 1;
				break;
			}
		}

		if (y && str[x] >= 'a' && str[x] <= 'z')
		{
			str[x] = str[x] - ('a' - 'A');
			y = 0;
		}
		else if (str[x] >= 'A' && str[x] <= 'Z')
		{
			y = 0;
		}

		x++;
	}

	return (str);
}
