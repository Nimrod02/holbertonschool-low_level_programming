#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

/**
* new_dog - function
* @name: dog name
* @age: dog age
* @owner: dog owner
* Return: print result
*/

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog = malloc(sizeof(dog_t) + 1);

	if (!new_dog)
	{
		free (new_dog);
		return (NULL);
	}

	new_dog->name = name;
	new_dog->age = age;
	new_dog->owner = owner;

return (new_dog);
}
