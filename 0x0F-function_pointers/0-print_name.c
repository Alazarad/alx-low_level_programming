#include "function_pointers.h"

/**
 * print_name - print a name
 * @name : name to be printed
 * @f : function to print name
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}
