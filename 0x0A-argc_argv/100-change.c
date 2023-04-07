#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - Prints the minimum number of coins
 * to make change for an amount of money
 * @argc: Arguments number
 * @argv: Argments value
 * Auth: Mouhcine Ezzaidi
 *
 * Return: 0 (Success), 1 (Failure)
 */
int main(int argc, char *argv[])
{
	int n, k, result;
	int coins[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	n = atoi(argv[1]);
	result = 0;

	if (n < 0)
	{
		printf("0\n");
		return (0);
	}
	for (k = 0; k < 5 && n >= 0; k++)
	{
		while (n >= coins[k])
		{
			result++;
			n -= coins[k];
		}
	}
	printf("%d\n", result);
	return (0);
}
