#include "main.h"

/**
 * print_alphabet_x10-entry point
 *
 * Return: 0
 */
void print_alphabet_x10(void)
{
	char ten_letter;
	int ten;

		for (ten = 0; ten <= 10; ten++)
		{
			for (ten_letter = 'a'; ten_letter <= 'z'; ten_letter++)
				_putchar(ten_letter);
			_putchar('\n');
		}
}
