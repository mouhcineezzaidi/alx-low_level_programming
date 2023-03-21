#include "main.h"
/**
 * print_alphabet - write the lower-case alphabet on a new line.
 *
 */
void print_alphabet(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}
