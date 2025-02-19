#include <stdio.h>
/**
 * main - Prints if number is positive, zero or negative
 *
 * Return: Always (Success)
 */

int main(void)
{
	char num;
	char lastd;

	for (num = 48 ; num <= 56 ; num++)
	{
		for (lastd = num + 1 ; lastd <= 57 ; lastd++)
		{
			putchar(num);
			putchar(lastd);

			if (num == '8' && lastd == '9')
				break;

			putchar(44);
			putchar(32);
		}
	}
	putchar('\n');

return (0);

}
