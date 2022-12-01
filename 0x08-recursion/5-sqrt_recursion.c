#include "main.h"
int sqr(int n, int a);
/**
 * _sqrt_recursion - find the square root of a number
 * @n: number to find solution to
 * Return: answer
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (sqr(n, 1));
}
/**
 * sqr- find the root using recursion
 * @n : input
 * @a : possible root
 * Return: result
 */
int sqr(int n, int a)
{
	if ((a * a) < n)
		return (sqr(n, (a + 1)));
	else if ((a * a) > n)
		return (-1);
	else
		return (a);
}
