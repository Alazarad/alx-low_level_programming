#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/**
 * main-entry point
 *
 * Return: 0
 */
int main(void)
{
	int n;
	int final;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	final = n % 10;
	final = abs(final);

	if (final > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, final);
	}
	else if (final == 0)
	{
		printf("Last digit of %d is %d and is \n", n, final);
	}
	else
	{
	printf("Last digit of %d is %d and is less than 6 and not 0\n", n, final);
	}
	return (0);
}
