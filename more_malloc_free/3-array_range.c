#include "main.h"
#include <stdlib.h>
#include <limits.h>
/**
 * array_range - A function that creates an array of integers
 * @min: Entry point, lowest integer
 * @max: End point, highest integer
 * Return: Array pointer, otherwise null
 */
int *array_range(int min, int max)
{
	int *c, i;
	long size;

	if (min > max)
	{
		return (NULL);
	}

	size = (long)max - min + 1;

	if (size > (INT_MAX / (int)sizeof(int)))
	{
		return (NULL);
	}

	c = malloc(size * sizeof(int));

	if (c == NULL)
	{
		return (NULL);
	}

	i = 0;

	while (i < size)
	{
		c[i] = min + i;
		i = i + 1;
	}
	return (c);
}
