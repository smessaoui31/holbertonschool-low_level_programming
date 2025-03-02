#include "main.h"

/**
 * _strncat - Concatenate two strings up to n bytes from src to dest
 * @dest: The destination string to which src will be appended
 * @src: The source string to append to dest
 * @n: The number of bytes to append from src
 * 
 * Return: A pointer to the resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int x;
	int y;

	x = 0;
	while (dest[x] != '\0')
	{
		x++;
	}
	y = 0;
	while (y < n && src[y] != '\0')
	{
		dest[x] = src[y];
		x++;
		y++;
	}
	if (y < n)
	{
		dest[x] = '\0';
	}
	return (dest);
}

