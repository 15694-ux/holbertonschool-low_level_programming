#include <stdio.h>
#include <stdarg.h>
#include <string.h>
#include "variadic_functions.h"
/**
 * print_numbers - Prints numbers
 * @separator: Separator
 * @n: Integer passed from function
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list printarg;
	unsigned int i;
	int value;

	i = 0;

	va_start(printarg, n);

	while (i < n)
	{
		value = va_arg(printarg, int);
		if (i > 0 && separator != NULL)
		{
			printf("%s", separator);
		}
		printf("%d", value);
		i = i + 1;
	}
	va_end(printarg);
	printf("\n");
}
