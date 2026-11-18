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

int main() {
	
	// Declare a cat, a dog, a bird, a mouse
	cat_t cat; 
	dog_t dog;
	bird_t bird;
	mouse_t mouse;
	snake_t snake;

	// Initialize them
	cat = (cat_t) {'c', 'd'};
	dog = (dog_t) {1 , 'd'};
	bird = (bird_t) {2, 3};
	mouse = (mouse_t) {'c', 4};
	snake = (snake_t) {'c', 3.14159};

	// Display the address of the struct, and the fields inside them
	printf("Cat: %p [c = %p, d = %p]\n", &cat, &cat.c, &cat.d); 

    return (0);
}
