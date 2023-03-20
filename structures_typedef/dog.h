#ifndef DOG_H
#define DOG_H

/**
 * struct dog - struct of dog
 * @name: First member
 * @age: Second member
 * @owner: Third member
 *
 * Description: Longer description
 */

struct dog
{
	char *name;
	float age;
	char *owner;
} my_dog;



void init_dog(struct dog *d, char *name, float age, char *owner);

#endif

