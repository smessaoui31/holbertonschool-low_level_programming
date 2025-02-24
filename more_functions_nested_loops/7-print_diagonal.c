#include "main.h"
/**
 * print_diagonal - Draws a diagonal
 * @n: The number of diagonal to draw
 *
 * Return: empty
 */

void print_diagonal(int n)
{
	int x;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (x = 0 ; x < n ; x++)
		{
			_putchar(92);

		}
		_putchar('\n');
	}
}
