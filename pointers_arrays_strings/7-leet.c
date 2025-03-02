#include "main.h"
/**
 * leet - Encodes a string into 1337 (leet speak).
 * @str: Pointer to the input string.
 *
 * Description: Replaces specific letters with corresponding leet characters:
 * - 'a' and 'A' -> '4'
 * - 'e' and 'E' -> '3'
 * - 'o' and 'O' -> '0'
 * - 't' and 'T' -> '7'
 * - 'l' and 'L' -> '1'
 *
 * Return: Pointer to the modified string.
 */
char *leet(char *str)
{
	int i = 0;
	int j;
	char letters[] = "aAeEoOtTlL";
	char leet_chars[] = "4433007711";

	while (str[i] != '\0')
	{
		for (j = 0; letters[j] != '\0'; j++)
		{
			if (str[i] == letters[j])
			{
				str[i] = leet_chars[j];
			}
		}
		i++;
	}

	return (str);
}
