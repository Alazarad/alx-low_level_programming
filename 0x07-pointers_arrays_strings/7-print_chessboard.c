#include "main.h"

/**
 * print_chessboard- print a multidimenstional array
 * @a: array to be printed
 * Return: void
 */
void print_chessboard(char (*a)[8])
{
	int b, c;

	for (b = 0; b <= 7; b++)
	{
		for (c = 0; c <= 7; c++)
		{
			_putchar(a[b][c]);
		}
		_putchar('\n');
	}
}
