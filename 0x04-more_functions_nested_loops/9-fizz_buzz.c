#include <stdio.h>
/**
 * main-entry point
 *@void: void
 * Return: 0
 */
int main(void)
{
	int a;

	printf("1 ");
	for (a = 2; a <= 100; a++)
	{
		if (a % 3 == 0 && a % 5 != 0)
			printf("Fizz ");
		else if (a % 5 == 0 && a % 3 != 0)
			printf("Buzz ");
		else if (a % 3 == 0 && a % 5 == 0)
			printf("FizzBuzz ");
		else
			printf("%d ", a);
	}
	putchar('\n');
	return (0);
}
