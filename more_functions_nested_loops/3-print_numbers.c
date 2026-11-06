#include "main.h"
/**
 * print_numbers - prints 1 to 9 with \n
 */
void print_numbers(void)
{
	int i;

	i = '0';
	while (i <= '9')
	{
		_putchar(i);
		i = i + 1;
	}
	_putchar('\n');
}
