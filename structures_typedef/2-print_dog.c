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
		printf("Name: (nil)");
	}
	if (p->owner == NULL)
	{
		printf("Owner: (nil)");
	}


	printf("Name: %s\n", p->name);
	printf("Age: %f\n", p->age);
	printf("Owner: %s\n", p->owner);
}
