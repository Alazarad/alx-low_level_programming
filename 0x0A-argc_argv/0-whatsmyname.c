#include <stdio.h>
/**
 * main - print the file name during runtime
 * @argc: argc
 * @argv: argv
 * Return: 0
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}
