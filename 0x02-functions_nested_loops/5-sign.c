#include "main.h"

/**
 * print_sign - prints the sign of a number
 * @n: the int to check
 * Return: 1 if positive and greater than zero, 0 if is Zero, and -1 if neg.
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}
