#include "dog.h"
/**
 * init_dog - intialise function for struct dog
 * @d: pointer to dog struct
 * @age: float type
 * @name: char type
 * @owner: char type
 * Return: return pointer to struct
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
