#include <stdio.h>
#include <string.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * printsep - Helper function for print separator
 * @printed: Value to print
 * Return: Returns 1
 */
int printsep(int printed)
{
	if (printed != 0)
	{
		printf(", ");
	}
	return (1);
}
/**
 * print_all - Prints all integers, doubles, chars, and strings
 * @format: Value to be passed
 */
void print_all(const char * const format, ...)
{
	va_list printarg;
	unsigned int i = 0;
	int printed = 0;
	char *val;

	va_start(printarg, format);

	while (format != NULL && format[i] != '\0')
	{
		switch (format[i])
		{
			case 'c':
				printed = printsep(printed);
				printf("%c", va_arg(printarg, int));
				break;
			case 'i':
				printed = printsep(printed);
				printf("%d", va_arg(printarg, int));
				break;
			case 'f':
				printed = printsep(printed);
				printf("%f", va_arg(printarg, double));
				break;
			case 's':
				printed = printsep(printed);
				val = va_arg(printarg, char *);
				if (val == NULL)
				{
					val = "(nil)";
				}
				printf("%s", val);
				break;
			default:
				break;
		}
		i = i + 1;
	}
	va_end(printarg);
	printf("\n");
}
