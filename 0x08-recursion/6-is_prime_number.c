#include "main.h"

int _prime(int n, int a);
/**
 * is_prime_number- find prime number
 * @n: input
 * Return: 1 if n is prime
 * 0 if not
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	else
		return (_prime(n, 2));
}
/**
 * _prime- help function for is_prime_number
 * @n : input
 * @a : possible divisors
 * Retrun: 1 if n is prime
 * 0 if not
 */
int _prime(int n, int a)
{
	if (n / a < 2)
		return (1);
	else
	{
		if (n % a == 0)
			return (0);
		else
			return (_prime(n, a + 1));
	}
}
