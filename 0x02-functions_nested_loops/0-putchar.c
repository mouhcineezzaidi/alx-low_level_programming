#include "main.h"
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char *h = "_putchar\n";

	while (*h)
	{
		_putchar(*h);
		h++;
	}
	return (0);
}
