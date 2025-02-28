#include "main.h"
/**
  * puts_half - Prints half of a string
  * @str: The string to print
  *
  * Return: void
  */

void puts_half(char *str)
{
	int l = 0;
	int x;
	int i;

	while (str[l] != '\0')
	{

		l++;
	}

	x = (l + 1) / 2;

	for (i = x; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}

	_putchar('\n');

}
