#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * *new_dog - creates a new dog
 * @name: dog name
 * @age: dog age
 * @owner: dog owner
 * Return: Object or NULL
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *newDog = malloc(sizeof(dog_t));
	
	if (newDog)
	{
		newDog->name = name;
		newDog->age = age;
		newDog->owner = owner;	
		return (newDog);
	}

	return (NULL);
}
