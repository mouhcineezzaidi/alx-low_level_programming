#include "main.h"

int check_palindrome(char *s, int i, int len);
int _strlen_recursion(char *s);

/**
 * is_palindrome - checks if a string is a palindrome
 * A palindrome string is a string that reads the same backward as forward
 * @s: string used
 * Auth: Mouhcine Ezzaidi
 *
 * Return: 1 if it is, 0 it's not
 */
int is_palindrome(char *s)
{
	if (*s == 0)
		return (1);
	return (check_palindrome(s, 0, _strlen_recursion(s)));
}

/**
 * _strlen_recursion - returns the length of a string
 * @s: string used
 *
 * Return: length of the string
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen_recursion(s + 1));
}

/**
 * check_palindrome - checks the characters recursively for palindrome
 * @s: string used
 * @i: to iterate through the string
 * @l: The length of the string
 *
 * Return: 1 if palindrome, 0 if not
 */
int check_palindrome(char *s, int i, int l)
{
	if (*(s + i) != *(s + l - 1))
		return (0);
	if (i >= l)
		return (1);
	return (check_palindrome(s, i + 1, l - 1));
}
