#include <stdio.h>
#include <string.h>
#include <stdlib.h>
/**
  * argstostr - concatenates all commnd line arguments to a program
  * @ac: no of command line arguments
  * @av: an array containing the command line arguments
  * Return: a pointer to the concatenated string
  */
char *argstostr(int ac, char **av)
{
	int i;
	int n;
	int nt;
	char *ptr;

	if (ac == 0 || av == NULL)
		return (NULL);
	nt = 0;
	for (i = 0; i < ac; i++)
	{
		n = strlen(av[i]) + 1;
		nt += n;
	}
	ptr = (char *)malloc((nt + 1) * sizeof(char));
	for (i = 0; i < ac; i++)
	{
		strcat(ptr, av[i]);
		strcat(ptr, "\n");
	}
	return (ptr);
}
