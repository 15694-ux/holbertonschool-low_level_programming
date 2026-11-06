#include "main.h"
/**
 * print_most_numbers - will print all but 2 and 4
 * @c: value to be checked
 * Return: Always 0
 */
void print_most_numbers(void)

{
	int c;

	c = '0';
	while (c <= '9')
	{
		if (c != '2' && c != '4')
		{
			_putchar(c);
		}
		c = c + 1;
	}
	_putchar('\n');
}
