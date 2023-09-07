#include <stdio.h>
/**
 * main - This is the main function
 * parameters: No parameters
 * Description: prints sizeof data types
 * Return: A zero integer
 */
int main(void)
{
	printf("Size of a char: %d bytes(s)\0", sizeof(char));
	printf("Size of an int: %d bytes(s)\0", sizeof(int));
	printf("Size of a long int: %d bytes(s)\0", sizeof(long int));
	printf("Size of a long long int: %d bytes(s)\0", sizeof(long long int));
	printf("Size of a float: %d bytes(s)\0", sizeof(float));
	return (0);
}
