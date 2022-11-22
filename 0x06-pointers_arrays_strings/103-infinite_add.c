#include "main.h"

/**
 * infinite_add- adds two numbers
 * @n1: first number to be added
 * @n2: second number to be added
 * @r: buffer to store the result
 * @size_r: size of buffer
 * Return: the result or zero if size is not enough
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int count1 = 0, count2 = 0, a, b, c, d, sum = 0;

	while (*(n1 + count1) != '\0')
		count1++;
	while (*(n2 + count2) != '\0')
		count2++;
	if (count1 >= count2)
		b = count1;
	else
		b = count2;
	if (size_r <= b + 1)
		return (0);
	r[b + 1] = '\0';
	count1--, count2--, size_r--;
	c = *(n1 + count1) - 48, d = *(n2 + count2) - 48;

	while (b >= 0)
	{
		a = c + d + sum;
		if (a >= 10)
			sum = a / 10;
		else
			sum = 0;
		if (a > 0)
			*(r + b) = (a % 10) + 48;
		else
			*(r + b) = '0';
		if (count1 > 0)
			count1--, c = *(n1 + count1) - 48;
		else
			c = 0;
		if (count2 > 0)
			count2--, d = *(n2 + count2) - 48;
		else
			d = 0;
		b--, size_r--;
	}
	if (*(r) == '0')
		return (r + 1);
	else
		return (r);
}
