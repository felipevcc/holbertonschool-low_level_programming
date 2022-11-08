#include <stdio.h>
#include <stdlib.h>
#include <string.h>
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
	unsigned int i, j;
	dog_t *newDog = malloc(sizeof(dog_t));

	if (newDog == NULL)
		return (NULL);

	newDog->name = malloc(strlen(name) + 1);
	if (newDog->name == NULL)
	{
		free(newDog->name);
		free(newDog);
		return (NULL);
	}
	for (i = 0; i < strlen(name) + 1; i++)
		(*newDog).name[i] = name[i];

	newDog->age = age;

	newDog->owner = malloc(strlen(owner) + 1);
	if (newDog->owner == NULL)
	{
		free(newDog->owner);
		free(newDog->name);
		free(newDog);
		return (NULL);
	}
	for (j = 0; j < strlen(owner) + 1; j++)
		(*newDog).owner[j] = owner[j];

	return (newDog);
}
