#include "main.h"
/**
 * puts2 - prints every other character in a string
 * @str: value to be checked
 */
void puts2(char *str)
{
	int i;

	i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);

		if (str[i + 1] == '\0')
		{
			break;
		}
		i = i + 2;
	}
	_putchar('\n');
}
