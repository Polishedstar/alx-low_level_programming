#include "dog.h"
#include <stdlib.h>
/**
 * init_dog - init a variable of struct dog
 * @d: pointer to struct type dog
 * @name: pointer to dog's name
 * @age: pointer to the dog's age
 * @owner: pointer to char owner's dog
 * Return: No
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
