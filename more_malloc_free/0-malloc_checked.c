#include "main.h"
#include <stdlib.h>
/**
 * malloc_checked - Allocates memory
 * @b: Unsigned int for memory to be allocated
 * Return: Pointer for success, 98 for failure to allocate memory
 */
void *malloc_checked(unsigned int b)
{
	void *c;

	c = malloc(b);
	if (c == NULL)
	{
		exit(98)
			;
	}
	return (c);
}
