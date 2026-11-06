#include "main.h"
/**
 * print_line - prints a straight line I guess
 * @n: is important
 */
void print_line(int n)
{
	int i;

	i = 0;
	while (i < n)
	{
		if (n <= 0)
		{
			_putchar('\n');
		}
		_putchar('_');
		i = i + 1;
	}
	_putchar('\n');
}
