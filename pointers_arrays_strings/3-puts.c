#include "main.h"
/**
 * _puts - will print a string with a new line
 * @str: pointer to str
 */
void _puts(char *str)
{
	int i;

	i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i = i + 1;
	}
	_putchar('\n');
}
