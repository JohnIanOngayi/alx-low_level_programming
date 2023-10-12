#include "variadic_functions.h"
/**
 * print_all - a function that prints anything
 * @format: a list of all types of arguments passed to the function
 */
void print_all(const char * const format, ...)
{
	int i, state;
	char *s;
	va_list args;

	va_start(args, format);
	i = 0;
	while (format[i] != '\0')
	{
		state = 0;
		switch (format[i])
		{
			case 'c':
				printf("%c", va_arg(args, int));
				break;
			case 'i':
				printf("%d", va_arg(args, int));
				break;
			case 'f':
				printf("%f", va_arg(args, double));
				break;
			case 's':
				s = va_arg(args, char *);
				if (s == NULL)
					s = "(nil)";
				printf("%s", s);
				break;
			default:
				state = 1;
				break;
		}
		if (format[i + 1] != '\0' && state != 1)
			printf(", ");
		i++;
	}
	va_end(args);
	printf("\n");
}
