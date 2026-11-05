#include "main.h"

/**
 * print_alphabet - print alphabet from a to z followed by empty line
 *
 */
void print_alphabet(void)
{
	char i = 'a';

	while (i <= 'z')
	{
		_putchar(i);
		i = i + 1;
	}
		_putchar('\n');
}
