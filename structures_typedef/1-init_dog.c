#include "dog.h"
#include <stdlib.h>
/**
 * init_dog - Initializes a variable for struct dog
 * @name: Name of dog
 * @age: Age of dog
 * @owner: Owner of dog
 * @p: Points to struct
 */
void init_dog(struct dog *p, char *name, float age, char *owner)
{
	if (p == NULL)
	{
		return;
	}
	p->name = name;
	p->age = age;
	p->owner = owner;
}
