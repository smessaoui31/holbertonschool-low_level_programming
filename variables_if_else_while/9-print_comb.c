#include <stdio.h>
/**
 * main - Prints if number is positive, zero or negative
 *
 * Return: Always (Success)
 */

int main(void)
{
	char ch;

	for (ch = 48 ; ch <= 57 ; ch++)
	{

		putchar(ch);
		if (ch == 57)
			break;
		putchar(44);
		putchar(32);
	}
	putchar('\n');
return (0);
}
