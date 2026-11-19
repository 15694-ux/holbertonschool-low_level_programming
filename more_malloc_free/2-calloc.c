#include "main.h"
#include <stdlib.h>
#include <limits.h>
/**
 * _calloc - Function will allocate memory for an array
 * @nmemb: Number of elements to allocate
 * @size: Size of each element in bytes
 * Return: Returns NULL if passed 0 or malloc fails, otherwise pointer
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *c;
	unsigned int i;

	i = 0;
	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	if (nmemb > (UINT_MAX / size))
	{
		return (NULL);
	}
	c = malloc(nmemb * size);
	if (c == NULL)
	{
		return (NULL);
	}
	while (i < (nmemb * size))
	{
		c[i] = 0;
		i = i + 1;
	}
	return (c);
}
