#include "dog.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * _strdup
 * @str: String
 * Return: Pointer to copy, Null on fail
 */
static char *_strdup(char *str)
{
	int i, j;
	char *c;

	i = 0;
	j = 0;

	if (str == NULL)
	{
		return (NULL);
	}
	while (str[i] != '\0')
	{
		i = i + 1;
	}
	c = malloc(i + 1);
	if (c == NULL)
	{
		return (NULL);
	}
	while (j <= i)
	{
		c[j] = str[j];
		j = j + 1;
	}
	return (c);
}
/**
 * new_dog - Creates a new dog
 * @name: Name
 * @age: Age
 * @owner: Owner
 * Return: Pointer to Dog, or null if fail
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *my_dog;

	if (name == NULL || owner == NULL)
	{
		return (NULL);
	}
	my_dog = malloc(sizeof(dog_t));
	if (my_dog == NULL)
	{
		return (NULL);
	}
	my_dog->name = _strdup(name);
	if (my_dog->name == NULL)
	{
		free(my_dog);
		return (NULL);
	}
	my_dog->owner = _strdup(owner);
	if (my_dog->owner == NULL)
	{
		free(my_dog->name);
		free(my_dog);
		return (NULL);
	}
	my_dog->age = age;
	return (my_dog);
}
