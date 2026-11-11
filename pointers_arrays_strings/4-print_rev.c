#include "main.h"
/**
 * print_rev - prints a string in reverse
 * @s: pointer to string
 */

void print_rev(char *s)
{
	int i;

	i = 0;

	while (s[i] != '\0');
	{
		i = i + 1;
	}
	while (i > 0)
	{
		i = i - 1;
		_putchar(s[i]);
	}
	_putchar('\n');
}
	 
