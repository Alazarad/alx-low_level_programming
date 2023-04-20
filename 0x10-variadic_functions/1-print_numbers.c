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

	va_start(input, n);
	for (a = 0; a < n - 1; a++)
	{
		printf("%d", va_arg(input, int));
		if (separator != NULL)
			printf("%s", separator);
	}
	printf("%d\n", va_arg(input, int));

	va_end(input);
}
