#include "main.h"

/**
 * factorial - returns the factorial of a number
 * @n: The given number
 * -1 indicate an error
 * Factorial of 0 is always 1
 * Auth: Mouhcine Ezzaidi
 *
 * Return: factorial of n
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}
