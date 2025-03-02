#include "main.h"
/**
 * reverse_array - Write a function that reverses the content of an array of
 * integers.
 *
 * @a: This is the input array
 * @n: This is the positions have the array
 *
 */
void reverse_array(int *a, int n)
{
	int x, last;

	last = n - 1;
	for (x = 0; x < n / 2; x++)
	{
		int start, end;

		start = a[x];
		end = a[last];
		a[x] = end;
		a[last] = start;
		last--;
	}
}
