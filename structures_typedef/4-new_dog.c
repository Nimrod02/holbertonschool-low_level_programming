#include "dog.h"
#include <stdlib.h>
#include <string.h>
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
	dog_t *new_dog = malloc(sizeof(dog_t));

	if (!new_dog)
	{
		free(new_dog);
		return (NULL);
	}
	new_dog->name = strdup(name);
	new_dog->age = age;
	new_dog->owner = strdup(owner);

	if (!new_dog->name || !new_dog->owner)
    {
        free(new_dog->name);
        free(new_dog->owner);
        free(new_dog);
        return (NULL);
    }
    
return (new_dog);
}
