#include <stdio.h>
#include <stdarg.h>
#include <string.h>
#include "variadic_functions.h"
/**
 * print_string - Prints a string of characters
 * @separator: Separators
 * @n: Integer to be passed
 */
void print_string(const char *separator, const unsigned int n, ...)
{
	va_list printarg;
	unsigned int i;
	char *j;

	i = 0;

	va_start(printarg, n);

	while (i < n)
	{
		j = va_arg(printarg, char *);
		if (i > 0 && separator != NULL)
		{
			printf("%s", separator);
		}
		if (j == NULL)
		{
			printf("(nil)");
		}
		else
		{
			printf("%s", j);
		}
		i = i + 1;
	}
	va_end(printarg);
	printf("\n");
}
