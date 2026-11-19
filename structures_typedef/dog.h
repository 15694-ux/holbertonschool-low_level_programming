/**
 * struct dog - Information of dog
 * @name: Name of dog
 * @age: Age of dog
 * @owner: Owner of dog
 */
typedef struct dog
{
	char *name, *owner;
	float age;
} dog_t;
/**
 * init_dog - Function for initializing variable
 */
void init_dog(struct dog *d, char *name, float age, char *owner);
/**
 * print_dog - Prints stored information of the struct
 */
void print_dog(struct dog *d);
/**
 * new_dog - Adds a new dog
 */
dog_t *new_dog(char *name, float age, char *owner);
/**
 * free_dog - Frees the dog
 */
void free_dog(dog_t *d);
