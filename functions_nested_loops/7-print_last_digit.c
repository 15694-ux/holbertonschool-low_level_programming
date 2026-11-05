#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 *
 * @r: value to be checked
 * Return: Always 0
 */

int print_last_digit(int r)
{
	int i = (r % 10);

	if (i < 0)
	{
		i = -i;
	}
	{
		_putchar(i + '0');
		return (i);
	}
}
