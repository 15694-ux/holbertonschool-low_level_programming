#include "main.h"

/**
 * print_alphabet_x10 - print the alphabet then repeat
 * for the following nine lines
 */
void print_alphabet_x10(void)
{
	int d = 0;

	while (d <= 9)
	{
		char i = 'a';

		while (i <= 'z')
		{
			_putchar(i);
			i = i + 1;
		}
		_putchar('\n');
		d = d + 1;
	}
}
