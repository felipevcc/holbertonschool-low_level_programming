#ifndef DOG_H
#define DOG_H

/**
 * struct dog - dog struct
 * @name: dog name
 * @age: dog age
 * @owner: dog owner
 *
 * Description: basic information about a dog
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

typedef struct dog dog_t;

/* prototypes */
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
