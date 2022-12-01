#include "main.h"

/**
 * factorial - find the factorial of a given number
 * @n : input
 * Retrun : value of factorial or
 * -1 if n is lower than 1
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
	{
		return (1);
	}
	else
		return (factorial(n - 1) * n);
}
