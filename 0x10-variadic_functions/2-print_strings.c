#include "variadic_functions.h"
/**
 * print_strings - prints string followed by a new line
 * @separator: string printed in between the strings
 * @n: number of variable arguments - 1
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *x;
	va_list args;

	if (separator == NULL)
		separator = "";
	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		x = va_arg(args, char*);
		if (x == NULL)
			x = "(nil)";
		printf("%s", x);
		if (i < (n - 1))
			printf("%s", separator);
	}
	printf("\n");
}
