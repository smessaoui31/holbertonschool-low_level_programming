#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * _calloc - function that allocates memory for an array, using malloc
 *
 * @nmemb: This is the length to allocate in the memory
 * @size: This is the size of casting to save
 *
 * Return: Pointer to the allocated memory.
 *         If nmemb or size is 0, then _calloc returns NULL
 *         If malloc fails, then _calloc returns NULL
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int a, b;
	char *c;

	if (nmemb == 0 || size == 0)
		return (NULL);
	b = (nmemb * size);
	c = malloc(b);
	if (c == NULL)
		return (NULL);
	for (a = 0; a < b; a++)
	{
		c[a] = 0;
	}
	return (c);
}
