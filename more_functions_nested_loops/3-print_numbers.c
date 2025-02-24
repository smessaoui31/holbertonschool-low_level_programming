#include "main.h"
/**
 * print_numbers - Prints the numbers
 *
 *@c - the character to display
 */


void print_numbers(void)
{
	char c;

	for (c = 48 ; c <= 57 ; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}
