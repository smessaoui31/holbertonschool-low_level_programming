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

	for (x = 0; dest[x] != '\0'; x++)
		;
	for (y = 0; src[y] != '\0'; y++)
	{
		dest[x] = src[y];
		x++;
	}
	return (dest);
}
