#include "main.h"

/**
 * _strcat - Concatenates two strings
 * @dest: Destination string (must have enough space)
 * @src: Source string to append to dest
 * Return: Pointer to dest
 */
char *_strcat(char *dest, char *src)
{
	int x;
	int y;

	while (dest[x] != '\0')
		x++;

	while (src[y] != '\0')
	{
		dest[x] = src[y];
		x++;
		y++;
	}

	dest[x] = '\0';

	return (dest);
}
