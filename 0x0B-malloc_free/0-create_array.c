#include<stdlib.h>
#include "main.h"

/**
 * *create_array - creates an array of characters,
 * this function initializes it with a specific char.
 * @size: The size of the created array
 * @c: Specific char to initialize the array with
 * Auth: Mouhcine Ezzaidi
 *
 * Return: pointer to the array (Success), NULL (Failure)
 */

char *create_array(unsigned int size, char c)
{
	char *ac;
	unsigned int i = 0;

	if (size == 0)
		return (NULL);

	ac = (char *)  malloc(sizeof(char) * size);

	if (ac == NULL)
		return (0);

	for (i = 0; i < size; i++)
	{
		ac[i] = c;
	}
	return (ac);
}
