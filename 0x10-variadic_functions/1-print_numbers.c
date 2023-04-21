#include "variadic_functions.h"

/**
 * print_numbers - print numbers
 * @separator : the string to be printed between numbers
 * @n : numbers passed to function
 * Return: void
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list input;
	unsigned int a;
	int b;

	va_start(input, n);
	for (a = 0; a < n - 1; a++)
	{
		b = va_arg(input, int);
		printf("%d", b);
		if (separator != NULL)
			printf("%s", separator);
	}
	if (n > 0)
	{
		b = va_arg(input, int);
		printf("%d\n", b);
	}

	va_end(input);
}
