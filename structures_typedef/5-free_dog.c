#include "dog.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * free_dog - Free allocated memory of dog
 * @p: Points to dog
 */
void free_dog(dog_t *p)
{
	if (p == NULL)
	{
		return;
	}
	free(p->name);
	free(p->owner);
	free(p);
}
