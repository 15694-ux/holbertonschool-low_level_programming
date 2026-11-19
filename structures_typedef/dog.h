#ifndef DOG_H
#define DOG_H

/**
 * struct dog - Information of dog
 * @name: Name of dog
 * @age: Age of dog
 * @owner: Owner of dog
 * init_dog - Initializes dog variable
 * print_dog - Prints contens of struct dog
 * new_dog - Creates a new dog
 * free_dog - Frees dog
 */
typedef struct dog
{
	char *name, *owner;
	float age;
} dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
