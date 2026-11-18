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
	
    // Declare a cat, a dog, a bird, a mouse
	cat_t cat;
	dog_t dog;
	bird_t bird;
	mouse_t mouse;
	snake_t snake;

    // Initialize them
	cat = (cat_t) { 'c', 'd' };
	dog = (dog_t) { 1, 'c' };
	bird = (bird_t) { 1, 1 };
	mouse = (mouse_t) { 'c', 1 };
	snake = (snake_t) { 'c', 3.1415 };

    // Display the address of the struct, and the fields inside them
   	printf("Address of cat is: %p [c = %c, d = %d]\n", &cat, cat.c, cat.d);
	printf("Address of dog is: %p [i = %d, c = %c]\n", &dog, dog.i, dog.c);
	printf("Address of bird is: %p [i = %d, c = %c]\n", &bird, bird.i, bird.i);
	printf("Address of mouse is: %p [c = %c, i = %d]\n", &mouse, mouse.c, mouse.i);
	printf("Address of snake is: %p [c = %c, d = %f]\n", &snake, snake.c, snake.d);
    return (0);
}
