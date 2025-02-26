#include "main.h"
/**
 * print_rev - print a string in reverse
 * @s: char array string type
 */

void print_rev(char *s)
{
	if (*s)
	{
		print_rev(s + 1);
		_putchar(*s);
	}

}
