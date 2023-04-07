#include <stdio.h>
#include "main.h"

/**
 * main - Prints number of arguments.
 * @argc: Arguments count
 * @argv: Arguments valu
 * Auth: Mouhcine Ezzaidi
 *
 * Return: INT count of arguments.
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (argc - 1);
}

