#include "main.h"
/**
 * _print_rev_recursion - Write a function that prints a string in reverse.
 * @s: Means my string of character to be print in reverse
 *
 */

void _print_rev_recursion(char *s)
{
	if (*s)
	{

		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
