#ifndef DOG_H
#define DOG_H

/**
 * struct dog - a struct data type with three members
 * @name: a string variable member of struct dog
 * @age: a float variable member of struct dog
 * @owner: a string variable of struct dog
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

/**
 * dog_t - Typedef for struct dog
 */
typedef struct dog dog_t;

dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
