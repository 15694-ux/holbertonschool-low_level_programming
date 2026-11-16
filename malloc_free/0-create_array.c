#include "main.h"
#include <stdlib.h>
#include <stddef.h>
/**
 * *create_array - Creates/prints an array
 * @size: Size to check against
 * @c: Initializes char
 * Return: Char
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *ptr;

	i = 0;

	if (size == 0)
	{
		return (NULL);
	}

	ptr = malloc(size * sizeof(c));

	if (ptr == NULL)
	{
		return (NULL);
	}
	while (size > i)
	{
		ptr[i] = c;
		i = i + 1;
	}
	return (ptr);
}
