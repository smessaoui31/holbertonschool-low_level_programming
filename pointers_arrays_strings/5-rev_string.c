#include "main.h"
/**
 * rev_string - reverse a string
 * @s: char array string type
 */


void rev_string(char *s)
{

	char *y = s;

	while (*y)
	{

		y++;
	}
	y--;


	while (s < y)
	{
		char temp = *s;
		*s = *y;
		*y = temp;
		s++;
		y--;

	}
}
