#include "main.h"
int check(char *s, int a, int count);
/**
 * _strlen_recursion - print the length of a string
 * @s: string to be counted
 * Return: count
 */
int _strlen_recursion(char *s)
{
	if (*s != '\0')
	{
		return (_strlen_recursion(s + 1) + 1);
	}
	else
		return (0);
}

/**
 * is_palindrome - check if a string is a palindrome
 * @s : string to be checked
 * Return: 1 if palindrome and 0 if not
 */
int is_palindrome(char *s)
{
	int count;

	count = _strlen_recursion(s);
	return (check(s, 0, count));
}
/**
 * check- helps is_palindrome
 * @s : input string
 * @a : count up
 * @count : count of string
 * Return: 1 or 0
 */
int check(char *s, int a, int count)
{
	if (a >= count)
		return (1);
	if (s[a] != s[count - 1])
		return (0);
	return (check(s, (a + 1), (count - 1)));
}
