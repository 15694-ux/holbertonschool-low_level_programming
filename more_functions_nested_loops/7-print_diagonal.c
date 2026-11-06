#include "main.h"
/**
 * print_diagonal - prints diagonally
 * @n: important again
 */
void print_diagonal(int n)
{
	int i;
	int o;

	i = 0;
	o = 0;
	if (n <= 0)
	{
		_putchar('\n');
	}
	while (i < n)
	{
		while (o < i)
		{
			_putchar(' ');
			o = o + 1;
		}
		_putchar(92);
		_putchar('\n');
		i = i + 1;
		o = 0;
	}
}
