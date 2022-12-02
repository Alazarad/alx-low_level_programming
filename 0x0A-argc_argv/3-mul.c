#include <stdio.h>
#include <stdlib.h>
/**
 * main- multiplies two numbers
 * @argc: argc
 * @argv: argv
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int a, b;

	a = strtol(argv[1], NULL, 10);
	b = strtol(argv[2], NULL, 10);
	if (argc == 3)
		printf("%d\n", a * b);
	else
		printf("Error");
	return (0);
}
