#include "main.h"

/**
 * _pow_recursion - returns the value of x raised to the power of y
 * @x: value to raise
 * @y: power
 * Anything to the power of 0 is 1
 * -1 indicates an error
 * Multiply x by itself recursively until y = 0
 * Auth: Mouhcine Ezzaidi
 *
 * Return: result of the power
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}
