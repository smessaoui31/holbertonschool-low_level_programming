#include <stdio.h>
/**
 * main - Prints if number is positive, zero or negative
 *
 * Return: Always (Success)
 */

int main(void)
{
	char a;
	char b;
	char c;

	for (a = '0' ; a <= '7' ; a++)
	{
		for (b = a + 1 ; b <= '8' ; b++)
		{
			for (c = b + 1 ; c <= '9' ; c++)
			{
				putchar(a);
				putchar(b);
				putchar(c);
				if (a == '7' && b == '8' && c == '9')
					break;
				putchar(44);
				putchar(32);
			}}}
	putchar('\n');
	return (0);
}

