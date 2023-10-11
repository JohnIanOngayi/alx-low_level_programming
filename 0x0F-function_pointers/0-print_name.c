#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * print_name  - prints a name
 * @name: the string argument to be printed
 * @f: a function pointer
 */
void print_name(char *name, void (*f)(char *))
{
	if (f == NULL)
		exit();
	f(name);
}
