#include <stdio.h>
/**
 * main - This is the entry point
 * Description: Prints the sum of even fibonacci numbers
 *      less than 4000000
 * Return: A zero integer value
 */
int main(void)
{
	int count;
	long int first;
	long int second;
	long int next;
	int iterate;

	first = 1;
	second = 2;
	count = 98;
	printf("%lu, %lu, ", first, second);
	for (iterate = 3; iterate <= count; iterate++)
	{
		next = first + second;
		printf("%lu", next);
		first = second;
		second = next;
		if (iterate == count)
			break;
		printf(", ");
	}
	printf("\n");
	return (0);
}
