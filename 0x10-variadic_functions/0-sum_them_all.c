#include "variadic_functions.h"

/**
 * sum_them_all - find the sum of alll parameters
 * @n: list of parameters
 * Return: sum
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list input;
	unsigned int i = 0;
	int sum = 0;

	if (n == 0)
		return (0);
	va_start(input, n);
	while (i < n)
	{
		sum += va_arg(input, int);
		i++;
	}
	va_end(input);

	return (sum);
}
