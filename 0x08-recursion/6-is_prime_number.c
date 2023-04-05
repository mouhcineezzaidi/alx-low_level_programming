#include "main.h"

int check_prime(int n, int i);

/**
 * is_prime_number - gives final results if an integer is a prime number or not
 * @n: number to evaluate
 * Any number less than 1 is not prime
 * Auth: Mouhcine Ezzaidi
 *
 * Return: 1 if n is a prime number, 0 if not
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (check_prime(n, n - 1));
}

/**
 * check_prime - calculates if a number is prime recursively
 * @n: number to evaluate
 * @i: the current divisor being tested
 *
 * Return: 1 if n is prime, 0 if not
 */
int check_prime(int n, int i)
{
	if (i == 1)
		return (1);
	if (n % i == 0 && i > 0)
		return (0);
	return (check_prime(n, i - 1));
}
