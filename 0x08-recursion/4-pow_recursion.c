#include "main.h"

/**
 * _pow_recursion- find the power of x raised by y
 * @x : base number
 * @y : exponent
 * Return: value of power
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	return (_pow_recursion(x, (y - 1)) * x);
}
