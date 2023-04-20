#include "variadic_functions.h"

/**
 * print_strings - print strings
 * @separator : string to be printed between input
 * @n : string to be printed
 * Return: void
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list input;
	unsigned int a = 0;
	const char *str;

	va_start(input, n);

	while (a < n)
	{
		str = va_arg(input, const char*);
		printf("%s", str);
		if (a < n - 1 && separator != NULL)
			printf("%s", separator);
		a++;
	}
	printf("\n");
	va_end(input);
}
