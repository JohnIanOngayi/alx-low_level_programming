#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
/**
 * init_dog - initialises a variable of type strcut dog
 * @d: a pointer variable to type struct dog
 * @name: a string variable member of struct d
 * @age: a float variable member of struct d
 * @owner: a string variable member of struct d
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		return;
	d->name = name;
	d->age = age;
	d->owner = owner;
}
