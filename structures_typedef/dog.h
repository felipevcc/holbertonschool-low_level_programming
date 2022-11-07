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

typedef struct dog dog_t;
struct dog
{
	char *name;
	float age;
	char *owner;
};

/* prototypes */
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif
