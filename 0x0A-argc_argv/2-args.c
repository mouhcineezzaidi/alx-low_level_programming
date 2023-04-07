#include <stdio.h>
#include "main.h"

/**
 * main - Prints the arguments including the program's name.
 * @argc: Arguments count
 * @argv: Arguments value
 * Auth: Mouhcine Ezzaidi
 *
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);

	return (0);
}

