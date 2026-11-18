#include <stdio.h>
#include <stdlib.h>

typedef struct cat_s {
    char c;
    char d;
} cat_t;

typedef struct dog_s {
    int i;
    char c;
} dog_t;

typedef struct bird_s {
    int i;
    int j;
} bird_t;

typedef struct mouse_s {
    char c;
    int i;
} mouse_t;

typedef struct snake_s {
    char c;
    double d;
} snake_t;

int main(char cat_s, char dog_s, char bird_s, char mouse_s, char snake_s) {
	
	char i, j, k, l, m;

	i = cat_s;
	j = dog_s;
	k = bird_s;
	l = mouse_s;
	m = snake_s;

	printf("The address of cat is: %p \n", &i);
	printf("The address of dog is %p \n", &j);
	printf("The address of bird is %p \n", &k);
	printf("The address of mouse is %p \n", &l);
	printf("The address of snake is %p \n", &m);




    // Declare a cat, a dog, a bird, a mouse

    // Initialize them

    // Display the address of the struct, and the fields inside them
    
    return (0);
}
