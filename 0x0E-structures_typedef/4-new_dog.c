#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
#include <string.h>
/**
 * new_dog - creates a new variable of type struct dog
 * @name: a string variable member of struct dog
 * @age: a float avriable member of struct dog
 * @owner: a string variable memeber of struct dog
 * Return: a pointer to struct dog variable or NULL
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	struct dog *sample;
	char *i, *j;
	int a, b, c;

	sample = malloc(sizeof(struct dog));
	if (sample == NULL)
		return (NULL);

	for (a = 0; *(name + a) != '\0'; a++)
		;
	for (b = 0; *(owner + b) != '\0'; b++)
		;
	i = malloc(sizeof(char) * a + 1);
	if (i == NULL)
	{
		free(sample);
		return (NULL);
	}
	j = malloc(sizeof(char) * b + 1);
	if (j == NULL)
	{
		free(i);
		free(sample);
		return (NULL);
	}
	for (c = 0; c <= a; c++)
		*(i + c) = *(name + c);
	for (c = 0; c <= b; c++)
		*(j + c) = *(owner + c);

	sample->name = i;
	sample->age = age;
	sample->owner = j;

	return (sample);
}
