#include "dog.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * print_dog - Prints the dog structure and the fields it holds
 * @p: Pointer
 */
void print_dog(struct dog *p)
{
	if (p == NULL)
	{
		return;
	}
	if (p->name == NULL)
	{
		printf("Name: (nil)\n");
	}
	else
	{
		printf("Name: %s\n", p->name);
	}

	printf("Age: %f\n", p->age);

	if (p->owner == NULL)
	{
		printf("Owner: (nil)\n");
	}
	else
	{
		printf("Owner: %s\n", p->owner);
	}
}
