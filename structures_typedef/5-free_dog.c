#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - frees a object
 * @d: dog object
 */

void free_dog(dog_t *d)
{
	free(newDog->owner);
	free(newDog->name);
	free(newDog);
}
