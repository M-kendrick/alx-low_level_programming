#ifndef DOG_H
#define DOG_H

/**
 * struct dog - a dog structure
 * @name: the dog's name
 * @age : the dog's age
 * @owner : name of the dog owner
 */
typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif
