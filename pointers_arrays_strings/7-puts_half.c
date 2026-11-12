#include "main.h"
/**
 * puts_half - will print the latter half of a string
 * @str: value to be checked
 */
void puts_half(char *str)
{
	int a;
	int b;

	a = 0;

	while (str[a] != '\0')
	{
		a = a + 1;
	}
	b = (a + 1) / 2;

	while (str[b] != '\0')
	{
		_putchar(str[b]);
		b = b + 1;
	}
	_putchar('\n');
}
