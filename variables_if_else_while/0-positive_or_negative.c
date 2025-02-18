#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 *include main means the different headers(stdlib.h time.h stdio.h)
 *main - my entire main in the programm
 *if means my different conditions to generate my rng
 *else meane the other conditions to my rng
 *return (0) always to success
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
if (n > 0)
{
printf(" %d is positive \n", n);
}
else if (n == 0)
{
printf(" %d is 0\n", n);
}
else
{
printf("%d is negative\n", n);
	}
	return (0);
}
